/*#pragma once
#include<variant>
#include<string>

// This enum defines what type of value is stored in the Value class.
// We can store either an INT, FLOAT, or STRING.
enum class ValueType
{
	INT,FLOAT,STRING
};

// The Value class is a generic container for holding BASIC variable types.
// It can store an integer, a float, or a string — but only one at a time.


class Value
{
public:
	Value();//default constructor
	Value(int i); 
	Value(float f);
	Value(const std:: string& s); //constructor for int,float,string
	ValueType getType() const; // Returns the type of value stored-int,float,string.
	int asInt() const;
	float asFloat() const;
	std::string asString() const; // Get the stored value as integer/float/string.
    // Throws error if stored type is not INT/float/string.
private:
	ValueType type_;  // Stores the current type of the value.
	std::variant<int, float,std::string>data_;  // Stores the actual data.
    //variant can hold any one of int, float, or std::string.
};
*/

#pragma once
#include <variant>
#include <string>

// This enum defines the types our BASIC variables can have.
enum class ValueType { INT, FLOAT, STRING };

// The Value class represents a typed value at runtime.
class Value {
public:
    Value();                     // Default constructor — sets INT 0
    Value(int i);
    Value(float f);
    Value(const std::string& s);

    ValueType getType() const;

    int asInt() const;
    float asFloat() const;
    std::string asString() const;

private:
    ValueType type_;
    std::variant<int, float, std::string> data_;
};
