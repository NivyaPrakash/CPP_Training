#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Lexer.h"
#include "Parser.h"
#include "StatementExecutor.h"
#include "SymbolTable.h"

int main() {
    // Sample GW-BASIC program lines
    std::map<int, std::string> programLines = {
        {10, "LET A = 5"},
        {20, "LET B = 10"},
        {30, "PRINT A + B * 2"},
        {40, "PRINT ( A + B ) * 2"},
        {50, "LET C = A + B"},
        {60, "PRINT C"}
    };

    SymbolTable symbolTable;
    StatementExecutor executor(symbolTable);

    for (const auto& [lineNo, line] : programLines) {
        try {
            Lexer lexer;
            auto tokens = lexer.tokenize(line);

            Parser parser(tokens);
            auto ast = parser.parseProgram();

            executor.execute(ast);
        }
        catch (const std::exception& e) {
            std::cerr << "Runtime Error at line " << lineNo << ": " << e.what() << std::endl;
            break; // stop on first error
        }
    }

    return 0;
}
