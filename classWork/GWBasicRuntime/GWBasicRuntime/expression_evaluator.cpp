#include "ExpressionEvaluator.h"
#include <stdexcept>

ExpressionEvaluator::ExpressionEvaluator(SymbolTable& symbols)
    : symbols_(symbols) {}

Value ExpressionEvaluator::evaluate(const AST& node) {
    switch (node->type()) {
    case ASTType::NumberExpr: {
        auto numNode = std::dynamic_pointer_cast<NumberNode>(node);
        return Value(std::stoi(numNode->value));
    }
    case ASTType::IdentExpr: {
        auto identNode = std::dynamic_pointer_cast<IdentNode>(node);
        return symbols_.getVariable(identNode->name);
    }
    case ASTType::BinOpExpr: {
        auto binNode = std::dynamic_pointer_cast<BinOpNode>(node);
        Value leftVal = evaluate(binNode->left);
        Value rightVal = evaluate(binNode->right);
        if (leftVal.getType() != ValueType::INT || rightVal.getType() != ValueType::INT) {
            throw std::runtime_error("Only integer operations supported");
        }
        int leftInt = leftVal.asInt();
        int rightInt = rightVal.asInt();
        if (binNode->op == "+") return Value(leftInt + rightInt);
        if (binNode->op == "-") return Value(leftInt - rightInt);
        if (binNode->op == "*") return Value(leftInt * rightInt);
        if (binNode->op == "/") {
            if (rightInt == 0) throw std::runtime_error("Division by zero");
            return Value(leftInt / rightInt);
        }
        throw std::runtime_error("Unknown binary operator");
    }
    default:
        throw std::runtime_error("Unknown expression node type");
    }
}

