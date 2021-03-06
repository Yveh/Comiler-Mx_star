#include <iostream>
#include <DominatorTree.h>
#include <cstring>

#include "antlr4-runtime.h"
#include "Mx_starLexer.h"
#include "Mx_starParser.h"
#include "ASTBuilder.h"
#include "TypeChecker.h"
#include "SemanticIssue.h"
#include "Builtin.h"
#include "IRBuilder.h"
#include "IRProgram.h"
#include "RVProgram.h"
#include "InstSelector.h"
#include "SSAConstructor.h"
#include "SSADestructor.h"
#include "RegAllocation.h"

int main(int argc, char *argv[]){
    bool codegen = true;
    bool optimize = true;
    if (argc == 2) {
        if (strcmp(argv[1], "-s") == 0) {
            codegen = false;
            optimize = false;
        }
        else if (strcmp(argv[1], "-c") == 0) {
            optimize = false;
        }
    }


//    const std::string filepath("../local-judge/testcase/optim/lca.mx");
////    const std::string filepath("../test.mx");
//    std::ifstream ifs;
//    ifs.open(filepath);
//    if (!ifs.good()) {
//        std::cerr << "bad" << std::endl;
//    }
//    antlr4::ANTLRInputStream input(ifs);




    antlr4::ANTLRInputStream input(std::cin);



    Mx_starLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
    Mx_starParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.prog();
    if (lexer.getNumberOfSyntaxErrors() + parser.getNumberOfSyntaxErrors() > 0)
        return -1;
    ASTBuilder ASTbuilder;
    auto root = ASTbuilder.build(tree);
    std::shared_ptr<SemanticIssue> issues = std::make_shared<SemanticIssue>();
    std::shared_ptr<Env> env = std::make_shared<Env>();
    Builtin::init(env);
    std::shared_ptr<TypeChecker> checker = std::make_shared<TypeChecker>(issues, env);
    checker->createEnv(root);
    if (issues->count() > 0) {
        issues->print();
        return -1;
    }
    checker->typeCheck(root);
    if (issues->count() > 0) {
        issues->print();
        return -1;
    }

    if (!codegen)
        return 0;
    std::shared_ptr<IRProgram> IRProg = std::make_shared<IRProgram>();
    std::shared_ptr<IRBuilder> IRbuilder = std::make_shared<IRBuilder>(IRProg);
    IRbuilder->createIR(root);
    IRProg->getAllBlocks();
//    IRProg->outputIR(std::cout);
    std::shared_ptr<DominatorTree> Domtree = std::make_shared<DominatorTree>();
    Domtree->createDomTree(IRProg);
    std::shared_ptr<SSAConstructor> SSAconstructor = std::make_shared<SSAConstructor>();
    SSAconstructor->run(IRProg);
//    IRProg->outputIR(std::cout);

//    const std::string SSAFilePath2 = std::string("../beforeopt.ll");
//    std::ofstream ofsSSA2(SSAFilePath2);
//    IRProg->outputIR(ofsSSA2);

    if (optimize) {
//        IRProg->jumpErase();
        IRProg->constantPropagation();
    }

//    const std::string SSAFilePath = std::string("../SSA.ll");
//    std::ofstream ofsSSA(SSAFilePath);
//    IRProg->outputIR(ofsSSA);

    std::shared_ptr<SSADestructor> SSAdestructor = std::make_shared<SSADestructor>();
    SSAdestructor->run(IRProg);
//    IRProg->outputIR(std::cout);

    if (optimize)
        IRProg->optimize();


    std::shared_ptr<RVProgram> RVProg = std::make_shared<RVProgram>();
    std::shared_ptr<InstSelector> RVbuilder = std::make_shared<InstSelector>(IRProg, RVProg);
    RVbuilder->run();
//    RVProg->outputIR(std::cout);

//    const std::string RVFilePath("../RV.s");
//    std::ofstream ofsRV(RVFilePath);
//    RVProg->outputIR(ofsRV);

    std::shared_ptr<RegAllocation> RegAllocator = std::make_shared<RegAllocation>(RVProg);
    RegAllocator->run();

    if (optimize)
        RVProg->optimize();

    RVProg->outputIR(std::cout);

    const std::string FinalFilePath = std::string("./output.s");
    std::ofstream ofsFinal(FinalFilePath);
    RVProg->outputIR(ofsFinal);

    return 0;
}