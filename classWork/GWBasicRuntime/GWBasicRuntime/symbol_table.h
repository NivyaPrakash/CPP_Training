/*
#pragma once
#include <string>
#include <unordered_map>
#include "type_system.h"

class SymbolTable {
public:
    // Sets or updates the value of a variable.
    // If the variable already exists, it updates the value.
    // If it doesn't exist, it creates a new variable.
    void setVariable(const std::string& name, const Value& value);
    Value getVariable(const std::string& name) const;  // Retrieves the value of a variable.
    // Throws an exception if the variable does not exist.


private:
    std::unordered_map<std::string, Value> variables_;
    // It act as a internal storage for variables.
   // Key   = Variable name 
   // Value = Value object holding int, float, or string
};

*/

#pragma once
#include <unordered_map>
#include <string>
#include "type_system.h"

// SymbolTable holds variables and their values.
class SymbolTable {
public:
    void setVariable(const std::string& name, const Value& value);
    Value getVariable(const std::string& name) const;

private:
    std::unordered_map<std::string, Value> variables_;
};

