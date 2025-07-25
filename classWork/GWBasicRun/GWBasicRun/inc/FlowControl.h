#pragma once

#include "ASTNode.h"
#include "SymbolTable.h"
#include "ExpressionEvaluator.h"
#include "ProgramMemory.h"

class FlowControl {
public:
    FlowControl(SymbolTable& symbols, ExpressionEvaluator& evaluator, ProgramMemory& memory);

    bool handle(ASTNode* node);

private:
    SymbolTable& symbolTable_;
    ExpressionEvaluator& evaluator_;
    ProgramMemory& programMemory_;

    bool handleIf(ASTNode* node);
};