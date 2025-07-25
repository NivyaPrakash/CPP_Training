#include <iostream>
#include <vector>
#include "Lexer.h"
#include "Parser.h"
#include "StatementExecutor.h"
#include "SymbolTable.h"
#include "ExpressionEvaluator.h"
#include "FlowControl.h"
#include "ProgramMemory.h"

// Function to print AST (for checking parser output)
void printAST(ASTNode* node, int indent = 0) {
    if (!node) return;
    std::string padding(indent, ' ');

    switch (node->type()) {
    case ASTType::Program: {
        std::cout << padding << "Program\n";
        auto* prog = dynamic_cast<ProgramNode*>(node);
        for (auto* stmt : prog->stmts) {
            printAST(stmt, indent + 2);
        }
        break;
    }
    case ASTType::PrintStmt: {
        std::cout << padding << "Print\n";
        auto* print = dynamic_cast<PrintNode*>(node);
        printAST(print->expr, indent + 2);
        break;
    }
    case ASTType::LetStmt: {
        auto* let = dynamic_cast<LetNode*>(node);
        std::cout << padding << "Let " << let->name << "\n";
        printAST(let->expr, indent + 2);
        break;
    }
    case ASTType::IfStmt: {
        std::cout << padding << "If Statement\n";
        break;  // You can expand this for debugging
    }
    case ASTType::BinOpExpr: {
        auto* bin = dynamic_cast<BinOpNode*>(node);
        std::cout << padding << "BinOp " << bin->op << "\n";
        printAST(bin->left, indent + 2);
        printAST(bin->right, indent + 2);
        break;
    }
    case ASTType::NumberExpr: {
        auto* num = dynamic_cast<NumberNode*>(node);
        std::cout << padding << "Number " << num->value << "\n";
        break;
    }
    case ASTType::IdentExpr: {
        auto* id = dynamic_cast<IdentNode*>(node);
        std::cout << padding << "Identifier " << id->name << "\n";
        break;
    }
    default:
        std::cout << padding << "Unknown Node\n";
    }
}

int main() {
    try {
        std::vector<std::string> lines = {
            "PRINT (2 + 3) * 4",
            "PRINT 2 + 3*4",
            "PRINT \"HELLO\"",
            "LET X = 10",
            "IF X < 5 THEN PRINT \"BIG\" ",

            "FOR I = 1 TO 5 STEP 1 : PRINT I",  // Just this line
             "NEXT I"
        };

        SymbolTable symbolTable;
        ProgramMemory programMemory;
        ExpressionEvaluator evaluator(symbolTable);
        FlowControl flowControl(symbolTable, evaluator, programMemory);
        StatementExecutor executor(symbolTable, evaluator, flowControl);

        for (const auto& line : lines) {
            Lexer lexer;
            auto tokens = lexer.tokenize(line);

            Parser parser;
            ASTNode* root = parser.parse(tokens);

            std::cout << "\n--- AST for line: \"" << line << "\" ---\n";
            printAST(root);

            executor.execute(root);  // Execute using runtime

            delete root;
        }

    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;//add
}
