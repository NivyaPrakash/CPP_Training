#pragma once
#include <unordered_map>
#include <string>
#include "type_system.h"

class SymbolTable {
public:
    void setVariable(const std::string& name, const Value& value);
    Value getVariable(const std::string& name) const;
    bool hasVariable(const std::string& name) const;

private:
    std::unordered_map<std::string, Value> variables_;
};
