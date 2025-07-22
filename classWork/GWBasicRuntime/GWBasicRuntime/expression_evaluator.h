#pragma once
#include "ASTNode.h"
#include "SymbolTable.h"
#include "TypeSystem.h"

class ExpressionEvaluator {
public:
    ExpressionEvaluator(SymbolTable& symbols);

    Value evaluate(const AST& node);

private:
    SymbolTable& symbols_;
};
