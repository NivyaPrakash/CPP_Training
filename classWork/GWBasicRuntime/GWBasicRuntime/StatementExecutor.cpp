#include "StatementExecutor.h"
#include <iostream>
#include <stdexcept>

StatementExecutor::StatementExecutor(SymbolTable& symbols)
    : symbols_(symbols), evaluator_(symbols) {}

void StatementExecutor::execute(const AST& node) {
    switch (node->type()) {
    case ASTType::Program: {
        auto prog = std::dynamic_pointer_cast<ProgramNode>(node);
        for (const auto& stmt : prog->stmts) {
            execute(stmt);
        }
        break;
    }
    case ASTType::PrintStmt: {
        auto printNode = std::dynamic_pointer_cast<PrintNode>(node);
        Value val = evaluator_.evaluate(printNode->expr);
        if (val.getType() == ValueType::INT)
            std::cout << val.asInt() << std::endl;
        else if (val.getType() == ValueType::FLOAT)
            std::cout << val.asFloat() << std::endl;
        else
            std::cout << val.asString() << std::endl;
        break;
    }
    case ASTType::LetStmt: {
        auto letNode = std::dynamic_pointer_cast<LetNode>(node);
        Value val = evaluator_.evaluate(letNode->expr);
        symbols_.setVariable(letNode->name, val);
        break;
    }
    default:
        throw std::runtime_error("Unknown statement type in executor");
    }
}
