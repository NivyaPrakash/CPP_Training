#include "FlowControl.h"
#include "ASTNode.h"
#include <stdexcept>

FlowControl::FlowControl(SymbolTable& symbols, ExpressionEvaluator& evaluator, ProgramMemory& memory)
    : symbolTable_(symbols), evaluator_(evaluator), programMemory_(memory) {}

bool FlowControl::handle(ASTNode* node) {
    if (!node) return false;

    switch (node->type()) {
    case ASTType::IfElseStmt:
        return handleIf(node);
    case ASTType::GotoStmt:
        return handleGoto(node);
    default:
        return false; // Not a flow control statement
    }
}

bool FlowControl::handleIf(ASTNode* node) {
    auto* ifNode = dynamic_cast<IfElseNode*>(node);
    if (!ifNode) {
        throw std::runtime_error("Invalid IF node type");
    }

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
        throw std::runtime_error("Unsupported IF types");
    }

    if (condition && ifNode->thenStmt) return true;
    if (!condition && ifNode->elseStmt) return true;

    return false;
}

bool FlowControl::handleGoto(ASTNode* node) {
    auto* gotoNode = dynamic_cast<GotoNode*>(node);
    if (!gotoNode) {
        throw std::runtime_error("Invalid GOTO node");
    }

    targetLine = gotoNode->line;
    jumpPending = true;
    return true;
}

bool FlowControl::hasJump() const {
    return jumpPending;
}

int FlowControl::jumpTarget() const {
    return targetLine;
}

void FlowControl::resetJump() {
    jumpPending = false;
    targetLine = -1;
}
