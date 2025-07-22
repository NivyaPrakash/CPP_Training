#pragma once
#include "ASTNode.h"
#include "SymbolTable.h"
#include "ExpressionEvaluator.h"

class StatementExecutor {
public:
    StatementExecutor(SymbolTable& symbols);

    void execute(const AST& node);

private:
    SymbolTable& symbols_;
    ExpressionEvaluator evaluator_;
};

