#include "ExpressionEvaluator.h"
#include <sstream>
#include <stdexcept>
#include <cctype>

ExpressionEvaluator::ExpressionEvaluator(SymbolTable& table)
    : table_(table) {}

// Existing string-based evaluator (for direct expressions)
Value ExpressionEvaluator::evaluate(const std::string& expr) {
    std::istringstream iss(expr);
    std::string token;
    int result = 0;
    char op = '+';  // Default operator

    while (iss >> token) {
        Value val = parseToken(token);
        int num = val.asInt();

        switch (op) {
        case '+': result += num; break;
        case '-': result -= num; break;
        case '*': result *= num; break;
        case '/':
            if (num == 0) throw std::runtime_error("Division by zero");
            result /= num;
            break;
        default:
            throw std::runtime_error("Unknown operator");
        }

        iss >> op;
    }

    return Value(result);
}

// ✅ New ASTNode-based evaluator
Value ExpressionEvaluator::evaluate(ASTNode* expr) {
    if (!expr) throw std::runtime_error("Null expression");

    switch (expr->type()) {
    case ASTType::NumberExpr: {
        NumberNode* num = dynamic_cast<NumberNode*>(expr);
        if (!num) throw std::runtime_error("Invalid number node");
        return Value(std::stoi(num->value));
    }
    case ASTType::StringExpr: {
        StringNode* str = dynamic_cast<StringNode*>(expr);
        if (!str) throw std::runtime_error("Invalid string node");
        return Value(str->value);
    }
    case ASTType::IdentExpr: {
        IdentNode* ident = dynamic_cast<IdentNode*>(expr);
        if (!ident) throw std::runtime_error("Invalid identifier node");
        return table_.getVariable(ident->name);
    }
    case ASTType::BinOpExpr: {
        BinOpNode* bin = dynamic_cast<BinOpNode*>(expr);
        if (!bin) throw std::runtime_error("Invalid binary op node");

        Value left = evaluate(bin->left);
        Value right = evaluate(bin->right);

        if (bin->op == "+") return Value(left.asInt() + right.asInt());
        if (bin->op == "-") return Value(left.asInt() - right.asInt());
        if (bin->op == "*") return Value(left.asInt() * right.asInt());
        if (bin->op == "/") {
            if (right.asInt() == 0) throw std::runtime_error("Division by zero");
            return Value(left.asInt() / right.asInt());
        }

        throw std::runtime_error("Unknown binary operator: " + bin->op);
    }
    default:
        throw std::runtime_error("Unsupported AST node in evaluator");
    }
}

Value ExpressionEvaluator::parseToken(const std::string& token) {
    if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1))
        return Value(std::stoi(token));
    else
        return table_.getVariable(token);
}
