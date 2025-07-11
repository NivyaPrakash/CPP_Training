#include <iostream>
#include "symbol_table.h"

int main() {
    SymbolTable table;

    table.setVariable("A", Value(42));
    table.setVariable("B", Value(3.14f));
    table.setVariable("C", Value("Hello World"));

    std::cout << "A = " << table.getVariable("A").asInt() << std::endl;
    std::cout << "B = " << table.getVariable("B").asFloat() << std::endl;
    std::cout << "C = " << table.getVariable("C").asString() << std::endl;

    return 0;
}

