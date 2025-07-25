#pragma once
#include "SymbolTable.h"
#include "TypeSystem.h"
#include "ASTNode.h"
#include <string>

class ExpressionEvaluator {
public:
    ExpressionEvaluator(SymbolTable& table);

    // Evaluate from string (original)
    Value evaluate(const std::string& expr);

    // ✅ Evaluate from ASTNode*
    Value evaluate(ASTNode* expr);

private:
    SymbolTable& table_;

    Value parseToken(const std::string& token);
};
