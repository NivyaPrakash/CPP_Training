#pragma once

#include "SymbolTable.h"
#include "ExpressionEvaluator.h"
#include "FlowControl.h"
#include "ASTNode.h"

class StatementExecutor {
public:
    StatementExecutor(SymbolTable& table, ExpressionEvaluator& evaluator, FlowControl& flow);

    void execute(ASTNode* node);

private:
    SymbolTable& table_;
    ExpressionEvaluator& evaluator_;
    FlowControl& flowControl_;

    void executePrint(PrintNode* printNode);
    void executeLet(LetNode* letNode);
    Value evaluateExpr(ASTNode* exprNode);
};
