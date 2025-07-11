#include "symbol_table.h"
#include <stdexcept>

void SymbolTable::setVariable(const std::string& name, const Value& value) {
    variables_[name] = value;
}

Value SymbolTable::getVariable(const std::string& name) const {
    auto it = variables_.find(name);
    if (it != variables_.end()) {
        return it->second;
    }
    throw std::runtime_error("Variable not defined: " + name);
}

bool SymbolTable::hasVariable(const std::string& name) const {
    return variables_.find(name) != variables_.end();
}
