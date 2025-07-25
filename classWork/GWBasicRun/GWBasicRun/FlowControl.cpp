#include "FlowControl.h"
#include "ASTNode.h"
#include <iostream>
#include <stdexcept>

FlowControl::FlowControl(SymbolTable& symbols, ExpressionEvaluator& evaluator, ProgramMemory& memory)
    : symbolTable_(symbols), evaluator_(evaluator), programMemory_(memory) {}

bool FlowControl::handle(ASTNode* node) {
    if (!node) return false;

    switch (node->type()) {
    case ASTType::IfElseStmt:
        return handleIf(node);
    default:
        return false; // Not a flow control statement
    }
}

bool FlowControl::handleIf(ASTNode* node) {
    // We assume node is actually an IfElseNode
    auto* ifNode = dynamic_cast<IfElseNode*>(node);
    if (!ifNode) {
        throw std::runtime_error("Invalid IF node type");
    }

    // Evaluate left and right expressions
    Value leftVal = evaluator_.evaluate(ifNode->left);
    Value rightVal = evaluator_.evaluate(ifNode->right);

    bool condition = false;

    if (leftVal.getType() == ValueType::INT && rightVal.getType() == ValueType::INT) {
        int l = leftVal.asInt();
        int r = rightVal.asInt();
        if (ifNode->op == "=")  condition = (l == r);
        else if (ifNode->op == "<") condition = (l < r);
        else if (ifNode->op == ">") condition = (l > r);
        else if (ifNode->op == "<=") condition = (l <= r);
        else if (ifNode->op == ">=") condition = (l >= r);
        else if (ifNode->op == "<>") condition = (l != r);
    }
    else {
        throw std::runtime_error("Unsupported types in IF condition");
    }

    if (condition && ifNode->thenStmt) {
        // execute THEN part
        // pass this to StatementExecutor
        return true;
    }
    else if (!condition && ifNode->elseStmt) {
        // execute ELSE part
        // pass this to StatementExecutor
        return true;
    }

    return false;
}
