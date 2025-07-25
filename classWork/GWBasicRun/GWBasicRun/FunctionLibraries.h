#pragma once
/*In your GW - BASIC interpreter, the FunctionLibrary module is responsible for implementing built - in functions like :

ABS(x) – Absolute value

SIN(x) – Sine

LEN(s) – String length

LEFT$(s, n), RIGHT$(s, n) – Substrings

ASC(s), CHR$(n) – Character functions

INT(x), RND – Integer conversion and random numbers

✅ Purpose of FunctionLibrary Module
The FunctionLibrary centralizes all built - in BASIC functions so that :

Your ExpressionEvaluator can call them easily

You avoid cluttering the evaluator or runtime with too many functions

You can validate arguments(e.g., type checking, number of parameters)

You support extending BASIC later(e.g., add MID$, EXP, LOG, etc.)

✅ What It Should Contain
🔹 1. Dispatcher
A function like :

cpp
Copy
Edit
Value callFunction(const std::string & name, const std::vector<Value>&args);
This routes "ABS" to evalAbs(args), "LEN" to evalLen(args) etc.

🔹 2. Individual Built - in Implementations
Each function has a handler.For example :

cpp
Copy
Edit
Value evalAbs(const std::vector<Value>&args) {
    if (args.size() != 1) throw std::runtime_error("ABS expects 1 argument");
    if (args[0].getType() == ValueType::INT)
        return Value(abs(args[0].asInt()));
    if (args[0].getType() == ValueType::FLOAT)
        return Value(fabs(args[0].asFloat()));
    throw std::runtime_error("ABS only works on numbers");
}
Other examples :

cpp
Copy
Edit
Value evalLen(const std::vector<Value>& args) {
    if (args.size() != 1 || args[0].getType() != ValueType::STRING)
        throw std::runtime_error("LEN expects 1 string");
    return Value((int)args[0].asString().size());
}
🔹 3. Utility / Support Functions
String conversion

Argument count / type checking

Uppercasing function names(case-insensitive BASIC)

✅ Integration with ExpressionEvaluator
In your ExpressionEvaluator, when parsing a function call like :

basic
Copy
Edit
PRINT ABS(-5)
You convert ABS(-5) to an AST node(e.g., FunctionCallNode("ABS", args)), and then:

cpp
Copy
Edit
Value ExpressionEvaluator::evaluate(ASTNode * node) {
    if (node->type() == ASTType::FunctionCall) {
        std::string name = node->child(0)->token().value;
        std::vector<Value> args;
        for (int i = 1; i < node->childCount(); ++i)
            args.push_back(evaluate(node->child(i)));
        return functionLibrary.callFunction(name, args);
    }
}
✅ File Structure(Suggested)
Copy
Edit
FunctionLibrary.h
FunctionLibrary.cpp
Inside :

cpp
Copy
Edit
// FunctionLibrary.h
#pragma once
#include "TypeSystem.h"
#include <string>
#include <vector>
#include <unordered_map>

class FunctionLibrary {
public:
    Value callFunction(const std::string& name, const std::vector<Value>& args);
};
✅ Example Functions to Support
Function	Purpose	Input Types	Return Type
ABS(x)	Absolute value	INT / FLOAT	INT / FLOAT
LEN(s)	Length of string	STRING	INT
LEFT$(s, n)	Left n chars	STRING, INT	STRING
RIGHT$(s, n)	Right n chars	STRING, INT	STRING
INT(x)	Truncate to int	FLOAT	INT
RND	Random number[0, 1)	(none)	FLOAT
ASC(s)	ASCII of 1st char	STRING	INT
CHR$(n)	Character from code	INT	STRING

✅ Summary
FunctionLibrary is a centralized module for all BASIC built - in function logic.It separates expression evaluation from function execution logic and allows clean validation, maintenance, and extension
*/