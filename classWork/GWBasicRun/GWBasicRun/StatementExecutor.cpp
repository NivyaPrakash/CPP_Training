#include "StatementExecutor.h"
#include "ASTNode.h"
#include <iostream>
#include <stdexcept>

StatementExecutor::StatementExecutor(SymbolTable& table, ExpressionEvaluator& evaluator, FlowControl& flow)
    : table_(table), evaluator_(evaluator), flowControl_(flow) {}

void StatementExecutor::execute(ASTNode* node) {
    if (!node) return;

    switch (node->type()) {
    case ASTType::Program: {
        ProgramNode* prog = static_cast<ProgramNode*>(node);
        for (ASTNode* stmt : prog->stmts) {
            execute(stmt);
        }
        break;
    }

    case ASTType::PrintStmt:
        executePrint(static_cast<PrintNode*>(node));
        break;

    case ASTType::LetStmt:
        executeLet(static_cast<LetNode*>(node));
        break;

    case ASTType::IfStmt: {
        IfNode* ifNode = static_cast<IfNode*>(node);
        if (flowControl_.handle(ifNode)) {
            execute(ifNode->thenStmt);
        }
        break;
    }

    case ASTType::IfElseStmt: {
        IfElseNode* ifElseNode = static_cast<IfElseNode*>(node);
        if (flowControl_.handle(ifElseNode)) {
            execute(ifElseNode->thenStmt);
        }
        else if (ifElseNode->elseStmt) {
            execute(ifElseNode->elseStmt);
        }
        break;
    }

    case ASTType::ForStmt:
        executeFor(static_cast<ForNode*>(node));
        break;

    default:
        // You can add more statement types like GOTO, INPUT later
        break;
    }
}

void StatementExecutor::executePrint(PrintNode* printNode) {
    Value result = evaluateExpr(printNode->expr);

    switch (result.getType()) {
    case ValueType::INT:
        std::cout << result.asInt() << std::endl;
        break;
    case ValueType::FLOAT:
        std::cout << result.asFloat() << std::endl;
        break;
    case ValueType::STRING:
        std::cout << result.asString() << std::endl;
        break;
    default:
        std::cout << "Unknown value type" << std::endl;
        break;
    }
}

void StatementExecutor::executeLet(LetNode* letNode) {
    Value result = evaluateExpr(letNode->expr);
    table_.setVariable(letNode->name, result);
}

void StatementExecutor::executeFor(ForNode* forNode) {
    std::string varName = forNode->var;

    // Evaluate start, end, and step values
    int start = evaluator_.evaluate(forNode->start).asInt();
    int end = evaluator_.evaluate(forNode->end).asInt();
    int step = evaluator_.evaluate(forNode->step).asInt();

    if (step == 0) step = 1; // avoid infinite loop

    for (int i = start; (step > 0 ? i <= end : i >= end); i += step) {
        table_.setVariable(varName, Value(i));
        execute(forNode->body);
    }
}

Value StatementExecutor::evaluateExpr(ASTNode* exprNode) {
    switch (exprNode->type()) {
    case ASTType::NumberExpr:
        return Value(std::stoi(static_cast<NumberNode*>(exprNode)->value));

    case ASTType::StringExpr:
        return Value(static_cast<StringNode*>(exprNode)->value);

    case ASTType::IdentExpr:
        return table_.getVariable(static_cast<IdentNode*>(exprNode)->name);

    case ASTType::BinOpExpr: {
        BinOpNode* bin = static_cast<BinOpNode*>(exprNode);
        Value leftVal = evaluateExpr(bin->left);
        Value rightVal = evaluateExpr(bin->right);

        if (bin->op == "+") {
            if (leftVal.getType() == ValueType::STRING || rightVal.getType() == ValueType::STRING) {
                return Value(leftVal.asString() + rightVal.asString());
            }
            return Value(leftVal.asInt() + rightVal.asInt());
        }
        else if (bin->op == "-") {
            return Value(leftVal.asInt() - rightVal.asInt());
        }
        else if (bin->op == "*") {
            return Value(leftVal.asInt() * rightVal.asInt());
        }
        else if (bin->op == "/") {
            if (rightVal.asInt() == 0)
                throw std::runtime_error("Division by zero");
            return Value(leftVal.asInt() / rightVal.asInt());
        }
        else {
            throw std::runtime_error("Unknown binary operator: " + bin->op);
        }
    }

    default:
        throw std::runtime_error("Unsupported expression type in evaluateExpr()");
    }
}
