
// Generated from /Users/zhangyuheng/CLionProjects/Comiler-Mx_star/grammar/Mx_star.g4 by ANTLR 4.8


#include "Mx_starListener.h"
#include "Mx_starVisitor.h"

#include "Mx_starParser.h"


using namespace antlrcpp;
using namespace antlr4;

Mx_starParser::Mx_starParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Mx_starParser::~Mx_starParser() {
  delete _interpreter;
}

std::string Mx_starParser::getGrammarFileName() const {
  return "Mx_star.g4";
}

const std::vector<std::string>& Mx_starParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Mx_starParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

Mx_starParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Mx_starParser::ClassdeclarationContext *> Mx_starParser::ProgContext::classdeclaration() {
  return getRuleContexts<Mx_starParser::ClassdeclarationContext>();
}

Mx_starParser::ClassdeclarationContext* Mx_starParser::ProgContext::classdeclaration(size_t i) {
  return getRuleContext<Mx_starParser::ClassdeclarationContext>(i);
}

std::vector<Mx_starParser::FunctiondeclarationContext *> Mx_starParser::ProgContext::functiondeclaration() {
  return getRuleContexts<Mx_starParser::FunctiondeclarationContext>();
}

Mx_starParser::FunctiondeclarationContext* Mx_starParser::ProgContext::functiondeclaration(size_t i) {
  return getRuleContext<Mx_starParser::FunctiondeclarationContext>(i);
}

std::vector<Mx_starParser::VardeclarationContext *> Mx_starParser::ProgContext::vardeclaration() {
  return getRuleContexts<Mx_starParser::VardeclarationContext>();
}

Mx_starParser::VardeclarationContext* Mx_starParser::ProgContext::vardeclaration(size_t i) {
  return getRuleContext<Mx_starParser::VardeclarationContext>(i);
}


size_t Mx_starParser::ProgContext::getRuleIndex() const {
  return Mx_starParser::RuleProg;
}

void Mx_starParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void Mx_starParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any Mx_starParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ProgContext* Mx_starParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, Mx_starParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Mx_starParser::Int)
      | (1ULL << Mx_starParser::Bool)
      | (1ULL << Mx_starParser::String)
      | (1ULL << Mx_starParser::Void)
      | (1ULL << Mx_starParser::Class)
      | (1ULL << Mx_starParser::Identifier))) != 0)) {
      setState(71);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(68);
        classdeclaration();
        break;
      }

      case 2: {
        setState(69);
        functiondeclaration();
        break;
      }

      case 3: {
        setState(70);
        vardeclaration();
        break;
      }

      }
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassdeclarationContext ------------------------------------------------------------------

Mx_starParser::ClassdeclarationContext::ClassdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::ClassdeclarationContext::Class() {
  return getToken(Mx_starParser::Class, 0);
}

tree::TerminalNode* Mx_starParser::ClassdeclarationContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}

tree::TerminalNode* Mx_starParser::ClassdeclarationContext::Opencur() {
  return getToken(Mx_starParser::Opencur, 0);
}

tree::TerminalNode* Mx_starParser::ClassdeclarationContext::Closecur() {
  return getToken(Mx_starParser::Closecur, 0);
}

tree::TerminalNode* Mx_starParser::ClassdeclarationContext::Semicolon() {
  return getToken(Mx_starParser::Semicolon, 0);
}

std::vector<Mx_starParser::FunctiondeclarationContext *> Mx_starParser::ClassdeclarationContext::functiondeclaration() {
  return getRuleContexts<Mx_starParser::FunctiondeclarationContext>();
}

Mx_starParser::FunctiondeclarationContext* Mx_starParser::ClassdeclarationContext::functiondeclaration(size_t i) {
  return getRuleContext<Mx_starParser::FunctiondeclarationContext>(i);
}

std::vector<Mx_starParser::VardeclarationContext *> Mx_starParser::ClassdeclarationContext::vardeclaration() {
  return getRuleContexts<Mx_starParser::VardeclarationContext>();
}

Mx_starParser::VardeclarationContext* Mx_starParser::ClassdeclarationContext::vardeclaration(size_t i) {
  return getRuleContext<Mx_starParser::VardeclarationContext>(i);
}


size_t Mx_starParser::ClassdeclarationContext::getRuleIndex() const {
  return Mx_starParser::RuleClassdeclaration;
}

void Mx_starParser::ClassdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassdeclaration(this);
}

void Mx_starParser::ClassdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassdeclaration(this);
}


antlrcpp::Any Mx_starParser::ClassdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitClassdeclaration(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ClassdeclarationContext* Mx_starParser::classdeclaration() {
  ClassdeclarationContext *_localctx = _tracker.createInstance<ClassdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, Mx_starParser::RuleClassdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(Mx_starParser::Class);
    setState(77);
    match(Mx_starParser::Identifier);
    setState(78);
    match(Mx_starParser::Opencur);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Mx_starParser::Int)
      | (1ULL << Mx_starParser::Bool)
      | (1ULL << Mx_starParser::String)
      | (1ULL << Mx_starParser::Void)
      | (1ULL << Mx_starParser::Identifier))) != 0)) {
      setState(81);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(79);
        functiondeclaration();
        break;
      }

      case 2: {
        setState(80);
        vardeclaration();
        break;
      }

      }
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(Mx_starParser::Closecur);
    setState(87);
    match(Mx_starParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondeclarationContext ------------------------------------------------------------------

Mx_starParser::FunctiondeclarationContext::FunctiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::FunctiondeclarationContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}

tree::TerminalNode* Mx_starParser::FunctiondeclarationContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

tree::TerminalNode* Mx_starParser::FunctiondeclarationContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}

Mx_starParser::BlockContext* Mx_starParser::FunctiondeclarationContext::block() {
  return getRuleContext<Mx_starParser::BlockContext>(0);
}

Mx_starParser::TypespecifierContext* Mx_starParser::FunctiondeclarationContext::typespecifier() {
  return getRuleContext<Mx_starParser::TypespecifierContext>(0);
}

std::vector<Mx_starParser::ParameterContext *> Mx_starParser::FunctiondeclarationContext::parameter() {
  return getRuleContexts<Mx_starParser::ParameterContext>();
}

Mx_starParser::ParameterContext* Mx_starParser::FunctiondeclarationContext::parameter(size_t i) {
  return getRuleContext<Mx_starParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> Mx_starParser::FunctiondeclarationContext::Comma() {
  return getTokens(Mx_starParser::Comma);
}

tree::TerminalNode* Mx_starParser::FunctiondeclarationContext::Comma(size_t i) {
  return getToken(Mx_starParser::Comma, i);
}


size_t Mx_starParser::FunctiondeclarationContext::getRuleIndex() const {
  return Mx_starParser::RuleFunctiondeclaration;
}

void Mx_starParser::FunctiondeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondeclaration(this);
}

void Mx_starParser::FunctiondeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondeclaration(this);
}


antlrcpp::Any Mx_starParser::FunctiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitFunctiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::FunctiondeclarationContext* Mx_starParser::functiondeclaration() {
  FunctiondeclarationContext *_localctx = _tracker.createInstance<FunctiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, Mx_starParser::RuleFunctiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(89);
      typespecifier();
      break;
    }

    }
    setState(92);
    match(Mx_starParser::Identifier);
    setState(93);
    match(Mx_starParser::Openpar);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Mx_starParser::Int)
      | (1ULL << Mx_starParser::Bool)
      | (1ULL << Mx_starParser::String)
      | (1ULL << Mx_starParser::Void)
      | (1ULL << Mx_starParser::Identifier))) != 0)) {
      setState(94);
      parameter();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Mx_starParser::Comma) {
        setState(95);
        match(Mx_starParser::Comma);
        setState(96);
        parameter();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(104);
    match(Mx_starParser::Closepar);
    setState(105);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

Mx_starParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::TypespecifierContext* Mx_starParser::ParameterContext::typespecifier() {
  return getRuleContext<Mx_starParser::TypespecifierContext>(0);
}

tree::TerminalNode* Mx_starParser::ParameterContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> Mx_starParser::ParameterContext::Openbra() {
  return getTokens(Mx_starParser::Openbra);
}

tree::TerminalNode* Mx_starParser::ParameterContext::Openbra(size_t i) {
  return getToken(Mx_starParser::Openbra, i);
}

std::vector<tree::TerminalNode *> Mx_starParser::ParameterContext::Closebra() {
  return getTokens(Mx_starParser::Closebra);
}

tree::TerminalNode* Mx_starParser::ParameterContext::Closebra(size_t i) {
  return getToken(Mx_starParser::Closebra, i);
}


size_t Mx_starParser::ParameterContext::getRuleIndex() const {
  return Mx_starParser::RuleParameter;
}

void Mx_starParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void Mx_starParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any Mx_starParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ParameterContext* Mx_starParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 6, Mx_starParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    typespecifier();
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Mx_starParser::Openbra) {
      setState(108);
      match(Mx_starParser::Openbra);
      setState(109);
      match(Mx_starParser::Closebra);
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(115);
    match(Mx_starParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Mx_starParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::VardeclarationContext* Mx_starParser::StatementContext::vardeclaration() {
  return getRuleContext<Mx_starParser::VardeclarationContext>(0);
}

Mx_starParser::IfstatementContext* Mx_starParser::StatementContext::ifstatement() {
  return getRuleContext<Mx_starParser::IfstatementContext>(0);
}

Mx_starParser::IterationstatementContext* Mx_starParser::StatementContext::iterationstatement() {
  return getRuleContext<Mx_starParser::IterationstatementContext>(0);
}

Mx_starParser::JumpstatementContext* Mx_starParser::StatementContext::jumpstatement() {
  return getRuleContext<Mx_starParser::JumpstatementContext>(0);
}

Mx_starParser::ExpressionstatementContext* Mx_starParser::StatementContext::expressionstatement() {
  return getRuleContext<Mx_starParser::ExpressionstatementContext>(0);
}

Mx_starParser::EmptystatementContext* Mx_starParser::StatementContext::emptystatement() {
  return getRuleContext<Mx_starParser::EmptystatementContext>(0);
}

Mx_starParser::BlockContext* Mx_starParser::StatementContext::block() {
  return getRuleContext<Mx_starParser::BlockContext>(0);
}


size_t Mx_starParser::StatementContext::getRuleIndex() const {
  return Mx_starParser::RuleStatement;
}

void Mx_starParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Mx_starParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any Mx_starParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::StatementContext* Mx_starParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, Mx_starParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      vardeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(118);
      ifstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(119);
      iterationstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(120);
      jumpstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(121);
      expressionstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(122);
      emptystatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(123);
      block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Mx_starParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::BlockContext::Opencur() {
  return getToken(Mx_starParser::Opencur, 0);
}

tree::TerminalNode* Mx_starParser::BlockContext::Closecur() {
  return getToken(Mx_starParser::Closecur, 0);
}

std::vector<Mx_starParser::StatementContext *> Mx_starParser::BlockContext::statement() {
  return getRuleContexts<Mx_starParser::StatementContext>();
}

Mx_starParser::StatementContext* Mx_starParser::BlockContext::statement(size_t i) {
  return getRuleContext<Mx_starParser::StatementContext>(i);
}


size_t Mx_starParser::BlockContext::getRuleIndex() const {
  return Mx_starParser::RuleBlock;
}

void Mx_starParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void Mx_starParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any Mx_starParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::BlockContext* Mx_starParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, Mx_starParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(Mx_starParser::Opencur);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
      | (1ULL << Mx_starParser::Integerliteral)
      | (1ULL << Mx_starParser::Plus)
      | (1ULL << Mx_starParser::Minus)
      | (1ULL << Mx_starParser::Inc)
      | (1ULL << Mx_starParser::Dec)
      | (1ULL << Mx_starParser::Logic_not)
      | (1ULL << Mx_starParser::Bitwise_not)
      | (1ULL << Mx_starParser::Openpar)
      | (1ULL << Mx_starParser::Opencur)
      | (1ULL << Mx_starParser::Semicolon)
      | (1ULL << Mx_starParser::Int)
      | (1ULL << Mx_starParser::Bool)
      | (1ULL << Mx_starParser::String)
      | (1ULL << Mx_starParser::Null)
      | (1ULL << Mx_starParser::Void)
      | (1ULL << Mx_starParser::True)
      | (1ULL << Mx_starParser::False)
      | (1ULL << Mx_starParser::If)
      | (1ULL << Mx_starParser::For)
      | (1ULL << Mx_starParser::While)
      | (1ULL << Mx_starParser::Break)
      | (1ULL << Mx_starParser::Continue)
      | (1ULL << Mx_starParser::Return)
      | (1ULL << Mx_starParser::New)
      | (1ULL << Mx_starParser::This)
      | (1ULL << Mx_starParser::Identifier))) != 0)) {
      setState(127);
      statement();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(Mx_starParser::Closecur);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclarationContext ------------------------------------------------------------------

Mx_starParser::VardeclarationContext::VardeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::TypespecifierContext* Mx_starParser::VardeclarationContext::typespecifier() {
  return getRuleContext<Mx_starParser::TypespecifierContext>(0);
}

tree::TerminalNode* Mx_starParser::VardeclarationContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}

tree::TerminalNode* Mx_starParser::VardeclarationContext::Semicolon() {
  return getToken(Mx_starParser::Semicolon, 0);
}

tree::TerminalNode* Mx_starParser::VardeclarationContext::Assign() {
  return getToken(Mx_starParser::Assign, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::VardeclarationContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::VardeclarationContext::getRuleIndex() const {
  return Mx_starParser::RuleVardeclaration;
}

void Mx_starParser::VardeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVardeclaration(this);
}

void Mx_starParser::VardeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVardeclaration(this);
}


antlrcpp::Any Mx_starParser::VardeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitVardeclaration(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::VardeclarationContext* Mx_starParser::vardeclaration() {
  VardeclarationContext *_localctx = _tracker.createInstance<VardeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, Mx_starParser::RuleVardeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    typespecifier();
    setState(136);
    match(Mx_starParser::Identifier);
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Mx_starParser::Assign) {
      setState(137);
      match(Mx_starParser::Assign);
      setState(138);
      expression();
    }
    setState(141);
    match(Mx_starParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstatementContext ------------------------------------------------------------------

Mx_starParser::IfstatementContext::IfstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::IfstatementContext::If() {
  return getToken(Mx_starParser::If, 0);
}

tree::TerminalNode* Mx_starParser::IfstatementContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::IfstatementContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::IfstatementContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}

std::vector<Mx_starParser::StatementContext *> Mx_starParser::IfstatementContext::statement() {
  return getRuleContexts<Mx_starParser::StatementContext>();
}

Mx_starParser::StatementContext* Mx_starParser::IfstatementContext::statement(size_t i) {
  return getRuleContext<Mx_starParser::StatementContext>(i);
}

tree::TerminalNode* Mx_starParser::IfstatementContext::Else() {
  return getToken(Mx_starParser::Else, 0);
}


size_t Mx_starParser::IfstatementContext::getRuleIndex() const {
  return Mx_starParser::RuleIfstatement;
}

void Mx_starParser::IfstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfstatement(this);
}

void Mx_starParser::IfstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfstatement(this);
}


antlrcpp::Any Mx_starParser::IfstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitIfstatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::IfstatementContext* Mx_starParser::ifstatement() {
  IfstatementContext *_localctx = _tracker.createInstance<IfstatementContext>(_ctx, getState());
  enterRule(_localctx, 14, Mx_starParser::RuleIfstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      match(Mx_starParser::If);
      setState(144);
      match(Mx_starParser::Openpar);
      setState(145);
      expression();
      setState(146);
      match(Mx_starParser::Closepar);
      setState(147);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(Mx_starParser::If);
      setState(150);
      match(Mx_starParser::Openpar);
      setState(151);
      expression();
      setState(152);
      match(Mx_starParser::Closepar);
      setState(153);
      statement();
      setState(154);
      match(Mx_starParser::Else);
      setState(155);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

Mx_starParser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::IterationstatementContext::While() {
  return getToken(Mx_starParser::While, 0);
}

tree::TerminalNode* Mx_starParser::IterationstatementContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::IterationstatementContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::IterationstatementContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}

Mx_starParser::StatementContext* Mx_starParser::IterationstatementContext::statement() {
  return getRuleContext<Mx_starParser::StatementContext>(0);
}

tree::TerminalNode* Mx_starParser::IterationstatementContext::For() {
  return getToken(Mx_starParser::For, 0);
}

std::vector<tree::TerminalNode *> Mx_starParser::IterationstatementContext::Semicolon() {
  return getTokens(Mx_starParser::Semicolon);
}

tree::TerminalNode* Mx_starParser::IterationstatementContext::Semicolon(size_t i) {
  return getToken(Mx_starParser::Semicolon, i);
}

Mx_starParser::ForinitContext* Mx_starParser::IterationstatementContext::forinit() {
  return getRuleContext<Mx_starParser::ForinitContext>(0);
}

Mx_starParser::ForcondContext* Mx_starParser::IterationstatementContext::forcond() {
  return getRuleContext<Mx_starParser::ForcondContext>(0);
}

Mx_starParser::ForincrContext* Mx_starParser::IterationstatementContext::forincr() {
  return getRuleContext<Mx_starParser::ForincrContext>(0);
}


size_t Mx_starParser::IterationstatementContext::getRuleIndex() const {
  return Mx_starParser::RuleIterationstatement;
}

void Mx_starParser::IterationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationstatement(this);
}

void Mx_starParser::IterationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationstatement(this);
}


antlrcpp::Any Mx_starParser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitIterationstatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::IterationstatementContext* Mx_starParser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 16, Mx_starParser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(180);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Mx_starParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(159);
        match(Mx_starParser::While);
        setState(160);
        match(Mx_starParser::Openpar);
        setState(161);
        expression();
        setState(162);
        match(Mx_starParser::Closepar);
        setState(163);
        statement();
        break;
      }

      case Mx_starParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(165);
        match(Mx_starParser::For);
        setState(166);
        match(Mx_starParser::Openpar);
        setState(168);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
          | (1ULL << Mx_starParser::Integerliteral)
          | (1ULL << Mx_starParser::Plus)
          | (1ULL << Mx_starParser::Minus)
          | (1ULL << Mx_starParser::Inc)
          | (1ULL << Mx_starParser::Dec)
          | (1ULL << Mx_starParser::Logic_not)
          | (1ULL << Mx_starParser::Bitwise_not)
          | (1ULL << Mx_starParser::Openpar)
          | (1ULL << Mx_starParser::Null)
          | (1ULL << Mx_starParser::True)
          | (1ULL << Mx_starParser::False)
          | (1ULL << Mx_starParser::New)
          | (1ULL << Mx_starParser::This)
          | (1ULL << Mx_starParser::Identifier))) != 0)) {
          setState(167);
          forinit();
        }
        setState(170);
        match(Mx_starParser::Semicolon);
        setState(172);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
          | (1ULL << Mx_starParser::Integerliteral)
          | (1ULL << Mx_starParser::Plus)
          | (1ULL << Mx_starParser::Minus)
          | (1ULL << Mx_starParser::Inc)
          | (1ULL << Mx_starParser::Dec)
          | (1ULL << Mx_starParser::Logic_not)
          | (1ULL << Mx_starParser::Bitwise_not)
          | (1ULL << Mx_starParser::Openpar)
          | (1ULL << Mx_starParser::Null)
          | (1ULL << Mx_starParser::True)
          | (1ULL << Mx_starParser::False)
          | (1ULL << Mx_starParser::New)
          | (1ULL << Mx_starParser::This)
          | (1ULL << Mx_starParser::Identifier))) != 0)) {
          setState(171);
          forcond();
        }
        setState(174);
        match(Mx_starParser::Semicolon);
        setState(176);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
          | (1ULL << Mx_starParser::Integerliteral)
          | (1ULL << Mx_starParser::Plus)
          | (1ULL << Mx_starParser::Minus)
          | (1ULL << Mx_starParser::Inc)
          | (1ULL << Mx_starParser::Dec)
          | (1ULL << Mx_starParser::Logic_not)
          | (1ULL << Mx_starParser::Bitwise_not)
          | (1ULL << Mx_starParser::Openpar)
          | (1ULL << Mx_starParser::Null)
          | (1ULL << Mx_starParser::True)
          | (1ULL << Mx_starParser::False)
          | (1ULL << Mx_starParser::New)
          | (1ULL << Mx_starParser::This)
          | (1ULL << Mx_starParser::Identifier))) != 0)) {
          setState(175);
          forincr();
        }
        setState(178);
        match(Mx_starParser::Closepar);
        setState(179);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitContext ------------------------------------------------------------------

Mx_starParser::ForinitContext::ForinitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::ExpressionContext* Mx_starParser::ForinitContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::ForinitContext::getRuleIndex() const {
  return Mx_starParser::RuleForinit;
}

void Mx_starParser::ForinitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinit(this);
}

void Mx_starParser::ForinitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinit(this);
}


antlrcpp::Any Mx_starParser::ForinitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitForinit(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ForinitContext* Mx_starParser::forinit() {
  ForinitContext *_localctx = _tracker.createInstance<ForinitContext>(_ctx, getState());
  enterRule(_localctx, 18, Mx_starParser::RuleForinit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForcondContext ------------------------------------------------------------------

Mx_starParser::ForcondContext::ForcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::ExpressionContext* Mx_starParser::ForcondContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::ForcondContext::getRuleIndex() const {
  return Mx_starParser::RuleForcond;
}

void Mx_starParser::ForcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForcond(this);
}

void Mx_starParser::ForcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForcond(this);
}


antlrcpp::Any Mx_starParser::ForcondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitForcond(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ForcondContext* Mx_starParser::forcond() {
  ForcondContext *_localctx = _tracker.createInstance<ForcondContext>(_ctx, getState());
  enterRule(_localctx, 20, Mx_starParser::RuleForcond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForincrContext ------------------------------------------------------------------

Mx_starParser::ForincrContext::ForincrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::ExpressionContext* Mx_starParser::ForincrContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::ForincrContext::getRuleIndex() const {
  return Mx_starParser::RuleForincr;
}

void Mx_starParser::ForincrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForincr(this);
}

void Mx_starParser::ForincrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForincr(this);
}


antlrcpp::Any Mx_starParser::ForincrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitForincr(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ForincrContext* Mx_starParser::forincr() {
  ForincrContext *_localctx = _tracker.createInstance<ForincrContext>(_ctx, getState());
  enterRule(_localctx, 22, Mx_starParser::RuleForincr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpstatementContext ------------------------------------------------------------------

Mx_starParser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::JumpstatementContext::Break() {
  return getToken(Mx_starParser::Break, 0);
}

tree::TerminalNode* Mx_starParser::JumpstatementContext::Semicolon() {
  return getToken(Mx_starParser::Semicolon, 0);
}

tree::TerminalNode* Mx_starParser::JumpstatementContext::Continue() {
  return getToken(Mx_starParser::Continue, 0);
}

tree::TerminalNode* Mx_starParser::JumpstatementContext::Return() {
  return getToken(Mx_starParser::Return, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::JumpstatementContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::JumpstatementContext::getRuleIndex() const {
  return Mx_starParser::RuleJumpstatement;
}

void Mx_starParser::JumpstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpstatement(this);
}

void Mx_starParser::JumpstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpstatement(this);
}


antlrcpp::Any Mx_starParser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitJumpstatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::JumpstatementContext* Mx_starParser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 24, Mx_starParser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Mx_starParser::Break: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        match(Mx_starParser::Break);
        setState(189);
        match(Mx_starParser::Semicolon);
        break;
      }

      case Mx_starParser::Continue: {
        enterOuterAlt(_localctx, 2);
        setState(190);
        match(Mx_starParser::Continue);
        setState(191);
        match(Mx_starParser::Semicolon);
        break;
      }

      case Mx_starParser::Return: {
        enterOuterAlt(_localctx, 3);
        setState(192);
        match(Mx_starParser::Return);
        setState(194);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
          | (1ULL << Mx_starParser::Integerliteral)
          | (1ULL << Mx_starParser::Plus)
          | (1ULL << Mx_starParser::Minus)
          | (1ULL << Mx_starParser::Inc)
          | (1ULL << Mx_starParser::Dec)
          | (1ULL << Mx_starParser::Logic_not)
          | (1ULL << Mx_starParser::Bitwise_not)
          | (1ULL << Mx_starParser::Openpar)
          | (1ULL << Mx_starParser::Null)
          | (1ULL << Mx_starParser::True)
          | (1ULL << Mx_starParser::False)
          | (1ULL << Mx_starParser::New)
          | (1ULL << Mx_starParser::This)
          | (1ULL << Mx_starParser::Identifier))) != 0)) {
          setState(193);
          expression();
        }
        setState(196);
        match(Mx_starParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

Mx_starParser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::ExpressionContext* Mx_starParser::ExpressionstatementContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::ExpressionstatementContext::Semicolon() {
  return getToken(Mx_starParser::Semicolon, 0);
}


size_t Mx_starParser::ExpressionstatementContext::getRuleIndex() const {
  return Mx_starParser::RuleExpressionstatement;
}

void Mx_starParser::ExpressionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionstatement(this);
}

void Mx_starParser::ExpressionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionstatement(this);
}


antlrcpp::Any Mx_starParser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitExpressionstatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ExpressionstatementContext* Mx_starParser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 26, Mx_starParser::RuleExpressionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    expression();
    setState(200);
    match(Mx_starParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptystatementContext ------------------------------------------------------------------

Mx_starParser::EmptystatementContext::EmptystatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::EmptystatementContext::Semicolon() {
  return getToken(Mx_starParser::Semicolon, 0);
}


size_t Mx_starParser::EmptystatementContext::getRuleIndex() const {
  return Mx_starParser::RuleEmptystatement;
}

void Mx_starParser::EmptystatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptystatement(this);
}

void Mx_starParser::EmptystatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptystatement(this);
}


antlrcpp::Any Mx_starParser::EmptystatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitEmptystatement(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::EmptystatementContext* Mx_starParser::emptystatement() {
  EmptystatementContext *_localctx = _tracker.createInstance<EmptystatementContext>(_ctx, getState());
  enterRule(_localctx, 28, Mx_starParser::RuleEmptystatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(Mx_starParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

Mx_starParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::LogicalorexpressionContext* Mx_starParser::ExpressionContext::logicalorexpression() {
  return getRuleContext<Mx_starParser::LogicalorexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::ExpressionContext::Assign() {
  return getToken(Mx_starParser::Assign, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::ExpressionContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}


size_t Mx_starParser::ExpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleExpression;
}

void Mx_starParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void Mx_starParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any Mx_starParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::ExpressionContext* Mx_starParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, Mx_starParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(204);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(205);
      logicalorexpression(0);
      setState(206);
      match(Mx_starParser::Assign);
      setState(207);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

Mx_starParser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::LogicalandexpressionContext* Mx_starParser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<Mx_starParser::LogicalandexpressionContext>(0);
}

Mx_starParser::LogicalorexpressionContext* Mx_starParser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<Mx_starParser::LogicalorexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::LogicalorexpressionContext::Logic_or() {
  return getToken(Mx_starParser::Logic_or, 0);
}


size_t Mx_starParser::LogicalorexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleLogicalorexpression;
}

void Mx_starParser::LogicalorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalorexpression(this);
}

void Mx_starParser::LogicalorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalorexpression(this);
}


antlrcpp::Any Mx_starParser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitLogicalorexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::LogicalorexpressionContext* Mx_starParser::logicalorexpression() {
   return logicalorexpression(0);
}

Mx_starParser::LogicalorexpressionContext* Mx_starParser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  Mx_starParser::LogicalorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, Mx_starParser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(212);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
        setState(214);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(215);
        match(Mx_starParser::Logic_or);
        setState(216);
        logicalandexpression(0); 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

Mx_starParser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::OrexpressionContext* Mx_starParser::LogicalandexpressionContext::orexpression() {
  return getRuleContext<Mx_starParser::OrexpressionContext>(0);
}

Mx_starParser::LogicalandexpressionContext* Mx_starParser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<Mx_starParser::LogicalandexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::LogicalandexpressionContext::Logic_and() {
  return getToken(Mx_starParser::Logic_and, 0);
}


size_t Mx_starParser::LogicalandexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleLogicalandexpression;
}

void Mx_starParser::LogicalandexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalandexpression(this);
}

void Mx_starParser::LogicalandexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalandexpression(this);
}


antlrcpp::Any Mx_starParser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitLogicalandexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::LogicalandexpressionContext* Mx_starParser::logicalandexpression() {
   return logicalandexpression(0);
}

Mx_starParser::LogicalandexpressionContext* Mx_starParser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  Mx_starParser::LogicalandexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, Mx_starParser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(223);
    orexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(230);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
        setState(225);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(226);
        match(Mx_starParser::Logic_and);
        setState(227);
        orexpression(0); 
      }
      setState(232);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OrexpressionContext ------------------------------------------------------------------

Mx_starParser::OrexpressionContext::OrexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::XorexpressionContext* Mx_starParser::OrexpressionContext::xorexpression() {
  return getRuleContext<Mx_starParser::XorexpressionContext>(0);
}

Mx_starParser::OrexpressionContext* Mx_starParser::OrexpressionContext::orexpression() {
  return getRuleContext<Mx_starParser::OrexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::OrexpressionContext::Bitwise_or() {
  return getToken(Mx_starParser::Bitwise_or, 0);
}


size_t Mx_starParser::OrexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleOrexpression;
}

void Mx_starParser::OrexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrexpression(this);
}

void Mx_starParser::OrexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrexpression(this);
}


antlrcpp::Any Mx_starParser::OrexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitOrexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::OrexpressionContext* Mx_starParser::orexpression() {
   return orexpression(0);
}

Mx_starParser::OrexpressionContext* Mx_starParser::orexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::OrexpressionContext *_localctx = _tracker.createInstance<OrexpressionContext>(_ctx, parentState);
  Mx_starParser::OrexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, Mx_starParser::RuleOrexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(234);
    xorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(241);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<OrexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOrexpression);
        setState(236);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(237);
        match(Mx_starParser::Bitwise_or);
        setState(238);
        xorexpression(0); 
      }
      setState(243);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- XorexpressionContext ------------------------------------------------------------------

Mx_starParser::XorexpressionContext::XorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::AndexpressionContext* Mx_starParser::XorexpressionContext::andexpression() {
  return getRuleContext<Mx_starParser::AndexpressionContext>(0);
}

Mx_starParser::XorexpressionContext* Mx_starParser::XorexpressionContext::xorexpression() {
  return getRuleContext<Mx_starParser::XorexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::XorexpressionContext::Bitwise_xor() {
  return getToken(Mx_starParser::Bitwise_xor, 0);
}


size_t Mx_starParser::XorexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleXorexpression;
}

void Mx_starParser::XorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorexpression(this);
}

void Mx_starParser::XorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorexpression(this);
}


antlrcpp::Any Mx_starParser::XorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitXorexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::XorexpressionContext* Mx_starParser::xorexpression() {
   return xorexpression(0);
}

Mx_starParser::XorexpressionContext* Mx_starParser::xorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::XorexpressionContext *_localctx = _tracker.createInstance<XorexpressionContext>(_ctx, parentState);
  Mx_starParser::XorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, Mx_starParser::RuleXorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(245);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(252);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<XorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXorexpression);
        setState(247);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(248);
        match(Mx_starParser::Bitwise_xor);
        setState(249);
        andexpression(0); 
      }
      setState(254);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

Mx_starParser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::EqualityexpressionContext* Mx_starParser::AndexpressionContext::equalityexpression() {
  return getRuleContext<Mx_starParser::EqualityexpressionContext>(0);
}

Mx_starParser::AndexpressionContext* Mx_starParser::AndexpressionContext::andexpression() {
  return getRuleContext<Mx_starParser::AndexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::AndexpressionContext::Bitwise_and() {
  return getToken(Mx_starParser::Bitwise_and, 0);
}


size_t Mx_starParser::AndexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleAndexpression;
}

void Mx_starParser::AndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndexpression(this);
}

void Mx_starParser::AndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndexpression(this);
}


antlrcpp::Any Mx_starParser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitAndexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::AndexpressionContext* Mx_starParser::andexpression() {
   return andexpression(0);
}

Mx_starParser::AndexpressionContext* Mx_starParser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  Mx_starParser::AndexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, Mx_starParser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(256);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(258);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(259);
        match(Mx_starParser::Bitwise_and);
        setState(260);
        equalityexpression(0); 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

Mx_starParser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::RelationalexpressionContext* Mx_starParser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<Mx_starParser::RelationalexpressionContext>(0);
}

Mx_starParser::EqualityexpressionContext* Mx_starParser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<Mx_starParser::EqualityexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::EqualityexpressionContext::Equal() {
  return getToken(Mx_starParser::Equal, 0);
}

tree::TerminalNode* Mx_starParser::EqualityexpressionContext::NotEqual() {
  return getToken(Mx_starParser::NotEqual, 0);
}


size_t Mx_starParser::EqualityexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleEqualityexpression;
}

void Mx_starParser::EqualityexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityexpression(this);
}

void Mx_starParser::EqualityexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityexpression(this);
}


antlrcpp::Any Mx_starParser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitEqualityexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::EqualityexpressionContext* Mx_starParser::equalityexpression() {
   return equalityexpression(0);
}

Mx_starParser::EqualityexpressionContext* Mx_starParser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  Mx_starParser::EqualityexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, Mx_starParser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(267);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(275);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(269);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(270);
          match(Mx_starParser::Equal);
          setState(271);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(272);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(273);
          match(Mx_starParser::NotEqual);
          setState(274);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

Mx_starParser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::ShiftexpressionContext* Mx_starParser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<Mx_starParser::ShiftexpressionContext>(0);
}

Mx_starParser::RelationalexpressionContext* Mx_starParser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<Mx_starParser::RelationalexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::RelationalexpressionContext::Less() {
  return getToken(Mx_starParser::Less, 0);
}

tree::TerminalNode* Mx_starParser::RelationalexpressionContext::Lesseq() {
  return getToken(Mx_starParser::Lesseq, 0);
}

tree::TerminalNode* Mx_starParser::RelationalexpressionContext::Greater() {
  return getToken(Mx_starParser::Greater, 0);
}

tree::TerminalNode* Mx_starParser::RelationalexpressionContext::Greatereq() {
  return getToken(Mx_starParser::Greatereq, 0);
}


size_t Mx_starParser::RelationalexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleRelationalexpression;
}

void Mx_starParser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void Mx_starParser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


antlrcpp::Any Mx_starParser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::RelationalexpressionContext* Mx_starParser::relationalexpression() {
   return relationalexpression(0);
}

Mx_starParser::RelationalexpressionContext* Mx_starParser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  Mx_starParser::RelationalexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, Mx_starParser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(281);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(295);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(283);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(284);
          match(Mx_starParser::Less);
          setState(285);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(286);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(287);
          match(Mx_starParser::Lesseq);
          setState(288);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(289);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(290);
          match(Mx_starParser::Greater);
          setState(291);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(292);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(293);
          match(Mx_starParser::Greatereq);
          setState(294);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

Mx_starParser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::AdditiveexpressionContext* Mx_starParser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<Mx_starParser::AdditiveexpressionContext>(0);
}

Mx_starParser::ShiftexpressionContext* Mx_starParser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<Mx_starParser::ShiftexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::ShiftexpressionContext::Leftshift() {
  return getToken(Mx_starParser::Leftshift, 0);
}

tree::TerminalNode* Mx_starParser::ShiftexpressionContext::Rightshift() {
  return getToken(Mx_starParser::Rightshift, 0);
}


size_t Mx_starParser::ShiftexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleShiftexpression;
}

void Mx_starParser::ShiftexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftexpression(this);
}

void Mx_starParser::ShiftexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftexpression(this);
}


antlrcpp::Any Mx_starParser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitShiftexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::ShiftexpressionContext* Mx_starParser::shiftexpression() {
   return shiftexpression(0);
}

Mx_starParser::ShiftexpressionContext* Mx_starParser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  Mx_starParser::ShiftexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, Mx_starParser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(301);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(311);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(309);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(303);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(304);
          match(Mx_starParser::Leftshift);
          setState(305);
          additiveexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(306);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(307);
          match(Mx_starParser::Rightshift);
          setState(308);
          additiveexpression(0);
          break;
        }

        } 
      }
      setState(313);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

Mx_starParser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::MultiplicativeexpressionContext* Mx_starParser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<Mx_starParser::MultiplicativeexpressionContext>(0);
}

Mx_starParser::AdditiveexpressionContext* Mx_starParser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<Mx_starParser::AdditiveexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::AdditiveexpressionContext::Plus() {
  return getToken(Mx_starParser::Plus, 0);
}

tree::TerminalNode* Mx_starParser::AdditiveexpressionContext::Minus() {
  return getToken(Mx_starParser::Minus, 0);
}


size_t Mx_starParser::AdditiveexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleAdditiveexpression;
}

void Mx_starParser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void Mx_starParser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


antlrcpp::Any Mx_starParser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::AdditiveexpressionContext* Mx_starParser::additiveexpression() {
   return additiveexpression(0);
}

Mx_starParser::AdditiveexpressionContext* Mx_starParser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  Mx_starParser::AdditiveexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, Mx_starParser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(315);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(325);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(323);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(317);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(318);
          match(Mx_starParser::Plus);
          setState(319);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(320);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(321);
          match(Mx_starParser::Minus);
          setState(322);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(327);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

Mx_starParser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::UnaryexpressionContext* Mx_starParser::MultiplicativeexpressionContext::unaryexpression() {
  return getRuleContext<Mx_starParser::UnaryexpressionContext>(0);
}

Mx_starParser::MultiplicativeexpressionContext* Mx_starParser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<Mx_starParser::MultiplicativeexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::MultiplicativeexpressionContext::Mul() {
  return getToken(Mx_starParser::Mul, 0);
}

tree::TerminalNode* Mx_starParser::MultiplicativeexpressionContext::Div() {
  return getToken(Mx_starParser::Div, 0);
}

tree::TerminalNode* Mx_starParser::MultiplicativeexpressionContext::Mod() {
  return getToken(Mx_starParser::Mod, 0);
}


size_t Mx_starParser::MultiplicativeexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleMultiplicativeexpression;
}

void Mx_starParser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void Mx_starParser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


antlrcpp::Any Mx_starParser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::MultiplicativeexpressionContext* Mx_starParser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

Mx_starParser::MultiplicativeexpressionContext* Mx_starParser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  Mx_starParser::MultiplicativeexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, Mx_starParser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(329);
    unaryexpression();
    _ctx->stop = _input->LT(-1);
    setState(342);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(340);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(331);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(332);
          match(Mx_starParser::Mul);
          setState(333);
          unaryexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(334);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(335);
          match(Mx_starParser::Div);
          setState(336);
          unaryexpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(337);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(338);
          match(Mx_starParser::Mod);
          setState(339);
          unaryexpression();
          break;
        }

        } 
      }
      setState(344);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

Mx_starParser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::PostfixexpressionContext* Mx_starParser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<Mx_starParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Inc() {
  return getToken(Mx_starParser::Inc, 0);
}

Mx_starParser::UnaryexpressionContext* Mx_starParser::UnaryexpressionContext::unaryexpression() {
  return getRuleContext<Mx_starParser::UnaryexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Dec() {
  return getToken(Mx_starParser::Dec, 0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Bitwise_not() {
  return getToken(Mx_starParser::Bitwise_not, 0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Logic_not() {
  return getToken(Mx_starParser::Logic_not, 0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Plus() {
  return getToken(Mx_starParser::Plus, 0);
}

tree::TerminalNode* Mx_starParser::UnaryexpressionContext::Minus() {
  return getToken(Mx_starParser::Minus, 0);
}

Mx_starParser::NewexpressionContext* Mx_starParser::UnaryexpressionContext::newexpression() {
  return getRuleContext<Mx_starParser::NewexpressionContext>(0);
}


size_t Mx_starParser::UnaryexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleUnaryexpression;
}

void Mx_starParser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void Mx_starParser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}


antlrcpp::Any Mx_starParser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::UnaryexpressionContext* Mx_starParser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, Mx_starParser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Mx_starParser::Stringliteral:
      case Mx_starParser::Integerliteral:
      case Mx_starParser::Openpar:
      case Mx_starParser::Null:
      case Mx_starParser::True:
      case Mx_starParser::False:
      case Mx_starParser::This:
      case Mx_starParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(345);
        postfixexpression(0);
        break;
      }

      case Mx_starParser::Inc: {
        enterOuterAlt(_localctx, 2);
        setState(346);
        match(Mx_starParser::Inc);
        setState(347);
        unaryexpression();
        break;
      }

      case Mx_starParser::Dec: {
        enterOuterAlt(_localctx, 3);
        setState(348);
        match(Mx_starParser::Dec);
        setState(349);
        unaryexpression();
        break;
      }

      case Mx_starParser::Bitwise_not: {
        enterOuterAlt(_localctx, 4);
        setState(350);
        match(Mx_starParser::Bitwise_not);
        setState(351);
        unaryexpression();
        break;
      }

      case Mx_starParser::Logic_not: {
        enterOuterAlt(_localctx, 5);
        setState(352);
        match(Mx_starParser::Logic_not);
        setState(353);
        unaryexpression();
        break;
      }

      case Mx_starParser::Plus: {
        enterOuterAlt(_localctx, 6);
        setState(354);
        match(Mx_starParser::Plus);
        setState(355);
        unaryexpression();
        break;
      }

      case Mx_starParser::Minus: {
        enterOuterAlt(_localctx, 7);
        setState(356);
        match(Mx_starParser::Minus);
        setState(357);
        unaryexpression();
        break;
      }

      case Mx_starParser::New: {
        enterOuterAlt(_localctx, 8);
        setState(358);
        newexpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewexpressionContext ------------------------------------------------------------------

Mx_starParser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::New() {
  return getToken(Mx_starParser::New, 0);
}

Mx_starParser::SimpletypespecifierContext* Mx_starParser::NewexpressionContext::simpletypespecifier() {
  return getRuleContext<Mx_starParser::SimpletypespecifierContext>(0);
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}

std::vector<Mx_starParser::ExpressionContext *> Mx_starParser::NewexpressionContext::expression() {
  return getRuleContexts<Mx_starParser::ExpressionContext>();
}

Mx_starParser::ExpressionContext* Mx_starParser::NewexpressionContext::expression(size_t i) {
  return getRuleContext<Mx_starParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Mx_starParser::NewexpressionContext::Openbra() {
  return getTokens(Mx_starParser::Openbra);
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::Openbra(size_t i) {
  return getToken(Mx_starParser::Openbra, i);
}

std::vector<tree::TerminalNode *> Mx_starParser::NewexpressionContext::Closebra() {
  return getTokens(Mx_starParser::Closebra);
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::Closebra(size_t i) {
  return getToken(Mx_starParser::Closebra, i);
}

std::vector<tree::TerminalNode *> Mx_starParser::NewexpressionContext::Comma() {
  return getTokens(Mx_starParser::Comma);
}

tree::TerminalNode* Mx_starParser::NewexpressionContext::Comma(size_t i) {
  return getToken(Mx_starParser::Comma, i);
}


size_t Mx_starParser::NewexpressionContext::getRuleIndex() const {
  return Mx_starParser::RuleNewexpression;
}

void Mx_starParser::NewexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewexpression(this);
}

void Mx_starParser::NewexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewexpression(this);
}


antlrcpp::Any Mx_starParser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitNewexpression(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::NewexpressionContext* Mx_starParser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, Mx_starParser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(Mx_starParser::New);
    setState(362);
    simpletypespecifier();
    setState(391);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(363);
      match(Mx_starParser::Openpar);
      setState(372);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
        | (1ULL << Mx_starParser::Integerliteral)
        | (1ULL << Mx_starParser::Plus)
        | (1ULL << Mx_starParser::Minus)
        | (1ULL << Mx_starParser::Inc)
        | (1ULL << Mx_starParser::Dec)
        | (1ULL << Mx_starParser::Logic_not)
        | (1ULL << Mx_starParser::Bitwise_not)
        | (1ULL << Mx_starParser::Openpar)
        | (1ULL << Mx_starParser::Null)
        | (1ULL << Mx_starParser::True)
        | (1ULL << Mx_starParser::False)
        | (1ULL << Mx_starParser::New)
        | (1ULL << Mx_starParser::This)
        | (1ULL << Mx_starParser::Identifier))) != 0)) {
        setState(364);
        expression();
        setState(369);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Mx_starParser::Comma) {
          setState(365);
          match(Mx_starParser::Comma);
          setState(366);
          expression();
          setState(371);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(374);
      match(Mx_starParser::Closepar);
      break;
    }

    case 2: {
      setState(381);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(375);
          match(Mx_starParser::Openbra);
          setState(376);
          expression();
          setState(377);
          match(Mx_starParser::Closebra); 
        }
        setState(383);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      }
      setState(388);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(384);
          match(Mx_starParser::Openbra);
          setState(385);
          match(Mx_starParser::Closebra); 
        }
        setState(390);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

Mx_starParser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::PrimaryexpressionContext* Mx_starParser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<Mx_starParser::PrimaryexpressionContext>(0);
}

Mx_starParser::PostfixexpressionContext* Mx_starParser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<Mx_starParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Inc() {
  return getToken(Mx_starParser::Inc, 0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Dec() {
  return getToken(Mx_starParser::Dec, 0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Openbra() {
  return getToken(Mx_starParser::Openbra, 0);
}

std::vector<Mx_starParser::ExpressionContext *> Mx_starParser::PostfixexpressionContext::expression() {
  return getRuleContexts<Mx_starParser::ExpressionContext>();
}

Mx_starParser::ExpressionContext* Mx_starParser::PostfixexpressionContext::expression(size_t i) {
  return getRuleContext<Mx_starParser::ExpressionContext>(i);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Closebra() {
  return getToken(Mx_starParser::Closebra, 0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}

std::vector<tree::TerminalNode *> Mx_starParser::PostfixexpressionContext::Comma() {
  return getTokens(Mx_starParser::Comma);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Comma(size_t i) {
  return getToken(Mx_starParser::Comma, i);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Dot() {
  return getToken(Mx_starParser::Dot, 0);
}

tree::TerminalNode* Mx_starParser::PostfixexpressionContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}


size_t Mx_starParser::PostfixexpressionContext::getRuleIndex() const {
  return Mx_starParser::RulePostfixexpression;
}

void Mx_starParser::PostfixexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixexpression(this);
}

void Mx_starParser::PostfixexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixexpression(this);
}


antlrcpp::Any Mx_starParser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitPostfixexpression(this);
  else
    return visitor->visitChildren(this);
}


Mx_starParser::PostfixexpressionContext* Mx_starParser::postfixexpression() {
   return postfixexpression(0);
}

Mx_starParser::PostfixexpressionContext* Mx_starParser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Mx_starParser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  Mx_starParser::PostfixexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, Mx_starParser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(394);
    primaryexpression();
    _ctx->stop = _input->LT(-1);
    setState(423);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(421);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(396);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(397);
          match(Mx_starParser::Inc);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(398);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(399);
          match(Mx_starParser::Dec);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(400);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(401);
          match(Mx_starParser::Openbra);
          setState(402);
          expression();
          setState(403);
          match(Mx_starParser::Closebra);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(405);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(406);
          match(Mx_starParser::Openpar);
          setState(415);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << Mx_starParser::Stringliteral)
            | (1ULL << Mx_starParser::Integerliteral)
            | (1ULL << Mx_starParser::Plus)
            | (1ULL << Mx_starParser::Minus)
            | (1ULL << Mx_starParser::Inc)
            | (1ULL << Mx_starParser::Dec)
            | (1ULL << Mx_starParser::Logic_not)
            | (1ULL << Mx_starParser::Bitwise_not)
            | (1ULL << Mx_starParser::Openpar)
            | (1ULL << Mx_starParser::Null)
            | (1ULL << Mx_starParser::True)
            | (1ULL << Mx_starParser::False)
            | (1ULL << Mx_starParser::New)
            | (1ULL << Mx_starParser::This)
            | (1ULL << Mx_starParser::Identifier))) != 0)) {
            setState(407);
            expression();
            setState(412);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == Mx_starParser::Comma) {
              setState(408);
              match(Mx_starParser::Comma);
              setState(409);
              expression();
              setState(414);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(417);
          match(Mx_starParser::Closepar);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(418);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(419);
          match(Mx_starParser::Dot);
          setState(420);
          match(Mx_starParser::Identifier);
          break;
        }

        } 
      }
      setState(425);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

Mx_starParser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::LiteralContext* Mx_starParser::PrimaryexpressionContext::literal() {
  return getRuleContext<Mx_starParser::LiteralContext>(0);
}

tree::TerminalNode* Mx_starParser::PrimaryexpressionContext::This() {
  return getToken(Mx_starParser::This, 0);
}

tree::TerminalNode* Mx_starParser::PrimaryexpressionContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}

tree::TerminalNode* Mx_starParser::PrimaryexpressionContext::Openpar() {
  return getToken(Mx_starParser::Openpar, 0);
}

Mx_starParser::ExpressionContext* Mx_starParser::PrimaryexpressionContext::expression() {
  return getRuleContext<Mx_starParser::ExpressionContext>(0);
}

tree::TerminalNode* Mx_starParser::PrimaryexpressionContext::Closepar() {
  return getToken(Mx_starParser::Closepar, 0);
}


size_t Mx_starParser::PrimaryexpressionContext::getRuleIndex() const {
  return Mx_starParser::RulePrimaryexpression;
}

void Mx_starParser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void Mx_starParser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}


antlrcpp::Any Mx_starParser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::PrimaryexpressionContext* Mx_starParser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, Mx_starParser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Mx_starParser::Stringliteral:
      case Mx_starParser::Integerliteral:
      case Mx_starParser::Null:
      case Mx_starParser::True:
      case Mx_starParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(426);
        literal();
        break;
      }

      case Mx_starParser::This: {
        enterOuterAlt(_localctx, 2);
        setState(427);
        match(Mx_starParser::This);
        break;
      }

      case Mx_starParser::Identifier: {
        enterOuterAlt(_localctx, 3);
        setState(428);
        match(Mx_starParser::Identifier);
        break;
      }

      case Mx_starParser::Openpar: {
        enterOuterAlt(_localctx, 4);
        setState(429);
        match(Mx_starParser::Openpar);
        setState(430);
        expression();
        setState(431);
        match(Mx_starParser::Closepar);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

Mx_starParser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::SimpletypespecifierContext* Mx_starParser::TypespecifierContext::simpletypespecifier() {
  return getRuleContext<Mx_starParser::SimpletypespecifierContext>(0);
}

std::vector<tree::TerminalNode *> Mx_starParser::TypespecifierContext::Openbra() {
  return getTokens(Mx_starParser::Openbra);
}

tree::TerminalNode* Mx_starParser::TypespecifierContext::Openbra(size_t i) {
  return getToken(Mx_starParser::Openbra, i);
}

std::vector<tree::TerminalNode *> Mx_starParser::TypespecifierContext::Closebra() {
  return getTokens(Mx_starParser::Closebra);
}

tree::TerminalNode* Mx_starParser::TypespecifierContext::Closebra(size_t i) {
  return getToken(Mx_starParser::Closebra, i);
}


size_t Mx_starParser::TypespecifierContext::getRuleIndex() const {
  return Mx_starParser::RuleTypespecifier;
}

void Mx_starParser::TypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifier(this);
}

void Mx_starParser::TypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifier(this);
}


antlrcpp::Any Mx_starParser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitTypespecifier(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::TypespecifierContext* Mx_starParser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 60, Mx_starParser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(435);
    simpletypespecifier();
    setState(440);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(436);
        match(Mx_starParser::Openbra);
        setState(437);
        match(Mx_starParser::Closebra); 
      }
      setState(442);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

Mx_starParser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::SimpletypespecifierContext::Bool() {
  return getToken(Mx_starParser::Bool, 0);
}

tree::TerminalNode* Mx_starParser::SimpletypespecifierContext::Int() {
  return getToken(Mx_starParser::Int, 0);
}

tree::TerminalNode* Mx_starParser::SimpletypespecifierContext::Void() {
  return getToken(Mx_starParser::Void, 0);
}

tree::TerminalNode* Mx_starParser::SimpletypespecifierContext::String() {
  return getToken(Mx_starParser::String, 0);
}

tree::TerminalNode* Mx_starParser::SimpletypespecifierContext::Identifier() {
  return getToken(Mx_starParser::Identifier, 0);
}


size_t Mx_starParser::SimpletypespecifierContext::getRuleIndex() const {
  return Mx_starParser::RuleSimpletypespecifier;
}

void Mx_starParser::SimpletypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletypespecifier(this);
}

void Mx_starParser::SimpletypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletypespecifier(this);
}


antlrcpp::Any Mx_starParser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitSimpletypespecifier(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::SimpletypespecifierContext* Mx_starParser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 62, Mx_starParser::RuleSimpletypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Mx_starParser::Int)
      | (1ULL << Mx_starParser::Bool)
      | (1ULL << Mx_starParser::String)
      | (1ULL << Mx_starParser::Void)
      | (1ULL << Mx_starParser::Identifier))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

Mx_starParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Mx_starParser::BooleanliteralContext* Mx_starParser::LiteralContext::booleanliteral() {
  return getRuleContext<Mx_starParser::BooleanliteralContext>(0);
}

tree::TerminalNode* Mx_starParser::LiteralContext::Integerliteral() {
  return getToken(Mx_starParser::Integerliteral, 0);
}

tree::TerminalNode* Mx_starParser::LiteralContext::Stringliteral() {
  return getToken(Mx_starParser::Stringliteral, 0);
}

tree::TerminalNode* Mx_starParser::LiteralContext::Null() {
  return getToken(Mx_starParser::Null, 0);
}


size_t Mx_starParser::LiteralContext::getRuleIndex() const {
  return Mx_starParser::RuleLiteral;
}

void Mx_starParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Mx_starParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any Mx_starParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::LiteralContext* Mx_starParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 64, Mx_starParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Mx_starParser::True:
      case Mx_starParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(445);
        booleanliteral();
        break;
      }

      case Mx_starParser::Integerliteral: {
        enterOuterAlt(_localctx, 2);
        setState(446);
        match(Mx_starParser::Integerliteral);
        break;
      }

      case Mx_starParser::Stringliteral: {
        enterOuterAlt(_localctx, 3);
        setState(447);
        match(Mx_starParser::Stringliteral);
        break;
      }

      case Mx_starParser::Null: {
        enterOuterAlt(_localctx, 4);
        setState(448);
        match(Mx_starParser::Null);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanliteralContext ------------------------------------------------------------------

Mx_starParser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Mx_starParser::BooleanliteralContext::True() {
  return getToken(Mx_starParser::True, 0);
}

tree::TerminalNode* Mx_starParser::BooleanliteralContext::False() {
  return getToken(Mx_starParser::False, 0);
}


size_t Mx_starParser::BooleanliteralContext::getRuleIndex() const {
  return Mx_starParser::RuleBooleanliteral;
}

void Mx_starParser::BooleanliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanliteral(this);
}

void Mx_starParser::BooleanliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Mx_starListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanliteral(this);
}


antlrcpp::Any Mx_starParser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Mx_starVisitor*>(visitor))
    return parserVisitor->visitBooleanliteral(this);
  else
    return visitor->visitChildren(this);
}

Mx_starParser::BooleanliteralContext* Mx_starParser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 66, Mx_starParser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    _la = _input->LA(1);
    if (!(_la == Mx_starParser::True

    || _la == Mx_starParser::False)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Mx_starParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 17: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 18: return orexpressionSempred(dynamic_cast<OrexpressionContext *>(context), predicateIndex);
    case 19: return xorexpressionSempred(dynamic_cast<XorexpressionContext *>(context), predicateIndex);
    case 20: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 21: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 22: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 23: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 24: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 25: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 28: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::orexpressionSempred(OrexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::xorexpressionSempred(XorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Mx_starParser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 5);
    case 19: return precpred(_ctx, 4);
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Mx_starParser::_decisionToDFA;
atn::PredictionContextCache Mx_starParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Mx_starParser::_atn;
std::vector<uint16_t> Mx_starParser::_serializedATN;

std::vector<std::string> Mx_starParser::_ruleNames = {
  "prog", "classdeclaration", "functiondeclaration", "parameter", "statement", 
  "block", "vardeclaration", "ifstatement", "iterationstatement", "forinit", 
  "forcond", "forincr", "jumpstatement", "expressionstatement", "emptystatement", 
  "expression", "logicalorexpression", "logicalandexpression", "orexpression", 
  "xorexpression", "andexpression", "equalityexpression", "relationalexpression", 
  "shiftexpression", "additiveexpression", "multiplicativeexpression", "unaryexpression", 
  "newexpression", "postfixexpression", "primaryexpression", "typespecifier", 
  "simpletypespecifier", "literal", "booleanliteral"
};

std::vector<std::string> Mx_starParser::_literalNames = {
  "", "", "", "'='", "'||'", "'&&'", "'|'", "'^'", "'&'", "'=='", "'!='", 
  "'<'", "'<='", "'>'", "'>='", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'++'", "'--'", "'!'", "'~'", "'.'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "','", "';'", "'int'", "'bool'", "'string'", "'null'", "'void'", 
  "'true'", "'false'", "'if'", "'else'", "'for'", "'while'", "'break'", 
  "'continue'", "'return'", "'new'", "'class'", "'this'"
};

std::vector<std::string> Mx_starParser::_symbolicNames = {
  "", "Stringliteral", "Integerliteral", "Assign", "Logic_or", "Logic_and", 
  "Bitwise_or", "Bitwise_xor", "Bitwise_and", "Equal", "NotEqual", "Less", 
  "Lesseq", "Greater", "Greatereq", "Leftshift", "Rightshift", "Plus", "Minus", 
  "Mul", "Div", "Mod", "Inc", "Dec", "Logic_not", "Bitwise_not", "Dot", 
  "Openpar", "Closepar", "Openbra", "Closebra", "Opencur", "Closecur", "Comma", 
  "Semicolon", "Int", "Bool", "String", "Null", "Void", "True", "False", 
  "If", "Else", "For", "While", "Break", "Continue", "Return", "New", "Class", 
  "This", "Identifier", "Whitespace", "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary Mx_starParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Mx_starParser::_tokenNames;

Mx_starParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x1c8, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x4a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x4d, 0xb, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x54, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x57, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x5, 
    0x4, 0x5d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x7, 0x4, 0x64, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x67, 0xb, 0x4, 0x5, 0x4, 
    0x69, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0x71, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x74, 0xb, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x7f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x83, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x86, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8e, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xa0, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0xab, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xaf, 0xa, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0xb3, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xb7, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0xc5, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc8, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xd4, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xdc, 0xa, 0x12, 0xc, 
    0x12, 0xe, 0x12, 0xdf, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xe7, 0xa, 0x13, 0xc, 0x13, 0xe, 
    0x13, 0xea, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x7, 0x14, 0xf2, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xf5, 
    0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x7, 0x15, 0xfd, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x100, 0xb, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x108, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x10b, 0xb, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x116, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0x119, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x12a, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x12d, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0x138, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x13b, 0xb, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x146, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x149, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x157, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 
    0x15a, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x16a, 0xa, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x172, 
    0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x175, 0xb, 0x1d, 0x5, 0x1d, 0x177, 
    0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 
    0x1d, 0x17e, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x181, 0xb, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x185, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x188, 0xb, 0x1d, 0x5, 0x1d, 0x18a, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x19d, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x1a0, 0xb, 0x1e, 0x5, 0x1e, 0x1a2, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x1a8, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x1ab, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1b4, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x1b9, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x1bc, 
    0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x1c4, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x2, 0xd, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x3a, 0x24, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 
    0x4, 0x5, 0x2, 0x25, 0x27, 0x29, 0x29, 0x36, 0x36, 0x3, 0x2, 0x2a, 0x2b, 
    0x2, 0x1eb, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x80, 0x3, 0x2, 0x2, 0x2, 0xe, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x16, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0x26, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x101, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x169, 0x3, 0x2, 0x2, 0x2, 0x38, 0x16b, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x1b5, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1c3, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4a, 0x5, 
    0x4, 0x3, 0x2, 0x47, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x48, 0x4a, 0x5, 0xe, 
    0x8, 0x2, 0x49, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
    0x7, 0x34, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x36, 0x2, 0x2, 0x50, 0x55, 0x7, 
    0x21, 0x2, 0x2, 0x51, 0x54, 0x5, 0x6, 0x4, 0x2, 0x52, 0x54, 0x5, 0xe, 
    0x8, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x22, 0x2, 0x2, 0x59, 0x5a, 
    0x7, 0x24, 0x2, 0x2, 0x5a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x5, 
    0x3e, 0x20, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x36, 0x2, 
    0x2, 0x5f, 0x68, 0x7, 0x1d, 0x2, 0x2, 0x60, 0x65, 0x5, 0x8, 0x5, 0x2, 
    0x61, 0x62, 0x7, 0x23, 0x2, 0x2, 0x62, 0x64, 0x5, 0x8, 0x5, 0x2, 0x63, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x1e, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0xc, 0x7, 0x2, 
    0x6c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x72, 0x5, 0x3e, 0x20, 0x2, 0x6e, 
    0x6f, 0x7, 0x1f, 0x2, 0x2, 0x6f, 0x71, 0x7, 0x20, 0x2, 0x2, 0x70, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x36, 0x2, 
    0x2, 0x76, 0x9, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7f, 0x5, 0xe, 0x8, 0x2, 
    0x78, 0x7f, 0x5, 0x10, 0x9, 0x2, 0x79, 0x7f, 0x5, 0x12, 0xa, 0x2, 0x7a, 
    0x7f, 0x5, 0x1a, 0xe, 0x2, 0x7b, 0x7f, 0x5, 0x1c, 0xf, 0x2, 0x7c, 0x7f, 
    0x5, 0x1e, 0x10, 0x2, 0x7d, 0x7f, 0x5, 0xc, 0x7, 0x2, 0x7e, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x7, 0x21, 0x2, 0x2, 0x81, 
    0x83, 0x5, 0xa, 0x6, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x88, 0x7, 0x22, 0x2, 0x2, 0x88, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x8a, 0x5, 0x3e, 0x20, 0x2, 0x8a, 0x8d, 0x7, 0x36, 0x2, 0x2, 
    0x8b, 0x8c, 0x7, 0x5, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0x20, 0x11, 0x2, 0x8d, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x24, 0x2, 0x2, 0x90, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x2c, 0x2, 0x2, 0x92, 0x93, 0x7, 0x1d, 
    0x2, 0x2, 0x93, 0x94, 0x5, 0x20, 0x11, 0x2, 0x94, 0x95, 0x7, 0x1e, 0x2, 
    0x2, 0x95, 0x96, 0x5, 0xa, 0x6, 0x2, 0x96, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x98, 0x7, 0x2c, 0x2, 0x2, 0x98, 0x99, 0x7, 0x1d, 0x2, 0x2, 0x99, 
    0x9a, 0x5, 0x20, 0x11, 0x2, 0x9a, 0x9b, 0x7, 0x1e, 0x2, 0x2, 0x9b, 0x9c, 
    0x5, 0xa, 0x6, 0x2, 0x9c, 0x9d, 0x7, 0x2d, 0x2, 0x2, 0x9d, 0x9e, 0x5, 
    0xa, 0x6, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xa2, 0x7, 0x2f, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x1d, 0x2, 0x2, 
    0xa3, 0xa4, 0x5, 0x20, 0x11, 0x2, 0xa4, 0xa5, 0x7, 0x1e, 0x2, 0x2, 0xa5, 
    0xa6, 0x5, 0xa, 0x6, 0x2, 0xa6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 
    0x7, 0x2e, 0x2, 0x2, 0xa8, 0xaa, 0x7, 0x1d, 0x2, 0x2, 0xa9, 0xab, 0x5, 
    0x14, 0xb, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0x24, 0x2, 
    0x2, 0xad, 0xaf, 0x5, 0x16, 0xc, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb2, 0x7, 0x24, 0x2, 0x2, 0xb1, 0xb3, 0x5, 0x18, 0xd, 0x2, 0xb2, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x1e, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0xa, 
    0x6, 0x2, 0xb6, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x20, 0x11, 0x2, 
    0xb9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x20, 0x11, 0x2, 0xbb, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x20, 0x11, 0x2, 0xbd, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x30, 0x2, 0x2, 0xbf, 0xc8, 0x7, 
    0x24, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x31, 0x2, 0x2, 0xc1, 0xc8, 0x7, 0x24, 
    0x2, 0x2, 0xc2, 0xc4, 0x7, 0x32, 0x2, 0x2, 0xc3, 0xc5, 0x5, 0x20, 0x11, 
    0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x24, 0x2, 0x2, 0xc7, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 
    0x20, 0x11, 0x2, 0xca, 0xcb, 0x7, 0x24, 0x2, 0x2, 0xcb, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcd, 0x7, 0x24, 0x2, 0x2, 0xcd, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xd4, 0x5, 0x22, 0x12, 0x2, 0xcf, 0xd0, 0x5, 0x22, 0x12, 
    0x2, 0xd0, 0xd1, 0x7, 0x5, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x20, 0x11, 0x2, 
    0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
    0x8, 0x12, 0x1, 0x2, 0xd6, 0xd7, 0x5, 0x24, 0x13, 0x2, 0xd7, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd9, 0xc, 0x3, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x6, 
    0x2, 0x2, 0xda, 0xdc, 0x5, 0x24, 0x13, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0x23, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x8, 0x13, 0x1, 0x2, 0xe1, 0xe2, 
    0x5, 0x26, 0x14, 0x2, 0xe2, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0xc, 
    0x3, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x7, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x26, 
    0x14, 0x2, 0xe6, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x8, 0x14, 0x1, 0x2, 0xec, 0xed, 0x5, 0x28, 0x15, 0x2, 0xed, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0xc, 0x3, 0x2, 0x2, 0xef, 0xf0, 0x7, 
    0x8, 0x2, 0x2, 0xf0, 0xf2, 0x5, 0x28, 0x15, 0x2, 0xf1, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x8, 0x15, 0x1, 0x2, 0xf7, 
    0xf8, 0x5, 0x2a, 0x16, 0x2, 0xf8, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 
    0xc, 0x3, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x9, 0x2, 0x2, 0xfb, 0xfd, 0x5, 
    0x2a, 0x16, 0x2, 0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x29, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x102, 0x8, 0x16, 0x1, 0x2, 0x102, 0x103, 0x5, 0x2c, 0x17, 0x2, 
    0x103, 0x109, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0xc, 0x3, 0x2, 0x2, 
    0x105, 0x106, 0x7, 0xa, 0x2, 0x2, 0x106, 0x108, 0x5, 0x2c, 0x17, 0x2, 
    0x107, 0x104, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10d, 0x8, 0x17, 0x1, 0x2, 0x10d, 0x10e, 0x5, 0x2e, 0x18, 0x2, 0x10e, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0xc, 0x4, 0x2, 0x2, 0x110, 
    0x111, 0x7, 0xb, 0x2, 0x2, 0x111, 0x116, 0x5, 0x2e, 0x18, 0x2, 0x112, 
    0x113, 0xc, 0x3, 0x2, 0x2, 0x113, 0x114, 0x7, 0xc, 0x2, 0x2, 0x114, 
    0x116, 0x5, 0x2e, 0x18, 0x2, 0x115, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x8, 0x18, 0x1, 0x2, 0x11b, 0x11c, 0x5, 0x30, 0x19, 0x2, 0x11c, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0xc, 0x6, 0x2, 0x2, 0x11e, 0x11f, 
    0x7, 0xd, 0x2, 0x2, 0x11f, 0x12a, 0x5, 0x30, 0x19, 0x2, 0x120, 0x121, 
    0xc, 0x5, 0x2, 0x2, 0x121, 0x122, 0x7, 0xe, 0x2, 0x2, 0x122, 0x12a, 
    0x5, 0x30, 0x19, 0x2, 0x123, 0x124, 0xc, 0x4, 0x2, 0x2, 0x124, 0x125, 
    0x7, 0xf, 0x2, 0x2, 0x125, 0x12a, 0x5, 0x30, 0x19, 0x2, 0x126, 0x127, 
    0xc, 0x3, 0x2, 0x2, 0x127, 0x128, 0x7, 0x10, 0x2, 0x2, 0x128, 0x12a, 
    0x5, 0x30, 0x19, 0x2, 0x129, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x129, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x123, 0x3, 0x2, 0x2, 0x2, 0x129, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x8, 
    0x19, 0x1, 0x2, 0x12f, 0x130, 0x5, 0x32, 0x1a, 0x2, 0x130, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x132, 0xc, 0x4, 0x2, 0x2, 0x132, 0x133, 0x7, 
    0x11, 0x2, 0x2, 0x133, 0x138, 0x5, 0x32, 0x1a, 0x2, 0x134, 0x135, 0xc, 
    0x3, 0x2, 0x2, 0x135, 0x136, 0x7, 0x12, 0x2, 0x2, 0x136, 0x138, 0x5, 
    0x32, 0x1a, 0x2, 0x137, 0x131, 0x3, 0x2, 0x2, 0x2, 0x137, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x8, 0x1a, 
    0x1, 0x2, 0x13d, 0x13e, 0x5, 0x34, 0x1b, 0x2, 0x13e, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x140, 0xc, 0x4, 0x2, 0x2, 0x140, 0x141, 0x7, 0x13, 
    0x2, 0x2, 0x141, 0x146, 0x5, 0x34, 0x1b, 0x2, 0x142, 0x143, 0xc, 0x3, 
    0x2, 0x2, 0x143, 0x144, 0x7, 0x14, 0x2, 0x2, 0x144, 0x146, 0x5, 0x34, 
    0x1b, 0x2, 0x145, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x145, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x8, 0x1b, 0x1, 
    0x2, 0x14b, 0x14c, 0x5, 0x36, 0x1c, 0x2, 0x14c, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x14d, 0x14e, 0xc, 0x5, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x15, 0x2, 
    0x2, 0x14f, 0x157, 0x5, 0x36, 0x1c, 0x2, 0x150, 0x151, 0xc, 0x4, 0x2, 
    0x2, 0x151, 0x152, 0x7, 0x16, 0x2, 0x2, 0x152, 0x157, 0x5, 0x36, 0x1c, 
    0x2, 0x153, 0x154, 0xc, 0x3, 0x2, 0x2, 0x154, 0x155, 0x7, 0x17, 0x2, 
    0x2, 0x155, 0x157, 0x5, 0x36, 0x1c, 0x2, 0x156, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x150, 0x3, 0x2, 0x2, 0x2, 0x156, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x16a, 0x5, 0x3a, 0x1e, 0x2, 
    0x15c, 0x15d, 0x7, 0x18, 0x2, 0x2, 0x15d, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x15e, 0x15f, 0x7, 0x19, 0x2, 0x2, 0x15f, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x160, 0x161, 0x7, 0x1b, 0x2, 0x2, 0x161, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x162, 0x163, 0x7, 0x1a, 0x2, 0x2, 0x163, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x164, 0x165, 0x7, 0x13, 0x2, 0x2, 0x165, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x166, 0x167, 0x7, 0x14, 0x2, 0x2, 0x167, 0x16a, 0x5, 0x36, 0x1c, 0x2, 
    0x168, 0x16a, 0x5, 0x38, 0x1d, 0x2, 0x169, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x169, 0x15e, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x160, 0x3, 0x2, 0x2, 0x2, 0x169, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x164, 0x3, 0x2, 0x2, 0x2, 0x169, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x7, 0x33, 0x2, 0x2, 0x16c, 0x189, 0x5, 0x40, 0x21, 0x2, 0x16d, 
    0x176, 0x7, 0x1d, 0x2, 0x2, 0x16e, 0x173, 0x5, 0x20, 0x11, 0x2, 0x16f, 
    0x170, 0x7, 0x23, 0x2, 0x2, 0x170, 0x172, 0x5, 0x20, 0x11, 0x2, 0x171, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 
    0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x18a, 0x7, 0x1e, 0x2, 0x2, 0x179, 
    0x17a, 0x7, 0x1f, 0x2, 0x2, 0x17a, 0x17b, 0x5, 0x20, 0x11, 0x2, 0x17b, 
    0x17c, 0x7, 0x20, 0x2, 0x2, 0x17c, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x179, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x181, 0x3, 0x2, 0x2, 0x2, 0x17f, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x186, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 
    0x183, 0x7, 0x1f, 0x2, 0x2, 0x183, 0x185, 0x7, 0x20, 0x2, 0x2, 0x184, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 0x189, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x189, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x18a, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x8, 0x1e, 0x1, 0x2, 0x18c, 
    0x18d, 0x5, 0x3c, 0x1f, 0x2, 0x18d, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x18e, 
    0x18f, 0xc, 0x7, 0x2, 0x2, 0x18f, 0x1a8, 0x7, 0x18, 0x2, 0x2, 0x190, 
    0x191, 0xc, 0x6, 0x2, 0x2, 0x191, 0x1a8, 0x7, 0x19, 0x2, 0x2, 0x192, 
    0x193, 0xc, 0x5, 0x2, 0x2, 0x193, 0x194, 0x7, 0x1f, 0x2, 0x2, 0x194, 
    0x195, 0x5, 0x20, 0x11, 0x2, 0x195, 0x196, 0x7, 0x20, 0x2, 0x2, 0x196, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0xc, 0x4, 0x2, 0x2, 0x198, 
    0x1a1, 0x7, 0x1d, 0x2, 0x2, 0x199, 0x19e, 0x5, 0x20, 0x11, 0x2, 0x19a, 
    0x19b, 0x7, 0x23, 0x2, 0x2, 0x19b, 0x19d, 0x5, 0x20, 0x11, 0x2, 0x19c, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a8, 0x7, 0x1e, 0x2, 0x2, 0x1a4, 
    0x1a5, 0xc, 0x3, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x1c, 0x2, 0x2, 0x1a6, 
    0x1a8, 0x7, 0x36, 0x2, 0x2, 0x1a7, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x190, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x192, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 
    0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1b4, 0x5, 0x42, 0x22, 0x2, 0x1ad, 0x1b4, 
    0x7, 0x35, 0x2, 0x2, 0x1ae, 0x1b4, 0x7, 0x36, 0x2, 0x2, 0x1af, 0x1b0, 
    0x7, 0x1d, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x20, 0x11, 0x2, 0x1b1, 0x1b2, 
    0x7, 0x1e, 0x2, 0x2, 0x1b2, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1ac, 
    0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1ae, 
    0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x1b5, 0x1ba, 0x5, 0x40, 0x21, 0x2, 0x1b6, 0x1b7, 0x7, 
    0x1f, 0x2, 0x2, 0x1b7, 0x1b9, 0x7, 0x20, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x9, 0x2, 
    0x2, 0x2, 0x1be, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c4, 0x5, 0x44, 
    0x23, 0x2, 0x1c0, 0x1c4, 0x7, 0x4, 0x2, 0x2, 0x1c1, 0x1c4, 0x7, 0x3, 
    0x2, 0x2, 0x1c2, 0x1c4, 0x7, 0x28, 0x2, 0x2, 0x1c3, 0x1bf, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c6, 0x9, 0x3, 0x2, 0x2, 0x1c6, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x49, 0x4b, 0x53, 0x55, 0x5c, 0x65, 0x68, 0x72, 0x7e, 0x84, 0x8d, 
    0x9f, 0xaa, 0xae, 0xb2, 0xb6, 0xc4, 0xc7, 0xd3, 0xdd, 0xe8, 0xf3, 0xfe, 
    0x109, 0x115, 0x117, 0x129, 0x12b, 0x137, 0x139, 0x145, 0x147, 0x156, 
    0x158, 0x169, 0x173, 0x176, 0x17f, 0x186, 0x189, 0x19e, 0x1a1, 0x1a7, 
    0x1a9, 0x1b3, 0x1ba, 0x1c3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Mx_starParser::Initializer Mx_starParser::_init;
