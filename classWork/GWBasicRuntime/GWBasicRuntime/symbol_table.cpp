/*
#include "symbol_table.h"
#include <stdexcept>

//setVariable

//Adds a new variable or updates the value of an existing variable.
//Used whenever a BASIC statement assigns a value (e.g., A = 5)

void SymbolTable::setVariable(const std::string& name, const Value& value) {
    variables_[name] = value;// Insert or overwrite variable in the map
}


// getVariable
//Retrieves the value of a variable by its name.
//Throws an error if the variable does not exist.

//Whenever a variable is used in an expression or printed the interpreter fetches its 
// current value using this function.
Value SymbolTable::getVariable(const std::string& name) const {
    auto it = variables_.find(name);
    if (it == variables_.end()) {
        throw std::runtime_error("Variable not found: " + name);
    }
    return it->second;// Return the stored Value object
}
*/

#include "symbol_table.h"
#include <stdexcept>

void SymbolTable::setVariable(const std::string& name, const Value& value) {
    variables_[name] = value;
}

Value SymbolTable::getVariable(const std::string& name) const {
    auto it = variables_.find(name);
    if (it == variables_.end()) {
        throw std::runtime_error("Variable not found: " + name);
    }
    return it->second;
}

