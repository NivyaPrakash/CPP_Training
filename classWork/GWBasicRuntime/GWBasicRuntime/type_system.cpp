/*
#include "type_system.h"
#include<stdexcept>// For runtime_error exceptions
Value::Value():type_(ValueType::INT),data_(0){} // Default constructor Initializes the Value as INT with value 0.
// Constructor for integer/float/string value.
// Sets the type to INT and stores the integer/float/string value.
Value::Value(int i):type_(ValueType::INT), data_(i) {}
Value::Value(float f) :type_(ValueType::FLOAT), data_(f) {}
Value::Value(const std::string& s) :type_(ValueType::STRING), data_(s) {} 

// Returns the type of the stored value (INT, FLOAT, or STRING).
ValueType Value::getType() const
{
	return type_;
}
int Value::asInt() const
{
	if (type_ == ValueType::INT)
		return std::get<int>(data_);
	throw std::runtime_error("Type is not INT");
}
float Value::asFloat() const
{
	if (type_ == ValueType::FLOAT)
		return std::get<float>(data_);
	throw std::runtime_error("Type is not FLOAT");
}
std::string Value::asString() const
{
	if (type_ == ValueType::STRING)
		return std::get<std::string>(data_);
	throw std::runtime_error("Type is not STRING");
}

// Returns the stored value as an integer/float/string.
// Throws an error if the actual type is not INT/FLOAT/STRING.

*/

#include "type_system.h"
#include <stdexcept>

Value::Value() : type_(ValueType::INT), data_(0) {}

Value::Value(int i) : type_(ValueType::INT), data_(i) {}

Value::Value(float f) : type_(ValueType::FLOAT), data_(f) {}

Value::Value(const std::string& s) : type_(ValueType::STRING), data_(s) {}

ValueType Value::getType() const {
	return type_;
}

int Value::asInt() const {
	if (type_ == ValueType::INT) return std::get<int>(data_);
	throw std::runtime_error("Type error: Not an INT");
}

float Value::asFloat() const {
	if (type_ == ValueType::FLOAT) return std::get<float>(data_);
	throw std::runtime_error("Type error: Not a FLOAT");
}

std::string Value::asString() const {
	if (type_ == ValueType::STRING) return std::get<std::string>(data_);
	throw std::runtime_error("Type error: Not a STRING");
}


