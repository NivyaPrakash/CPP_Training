#pragma once

#include "ASTNode.h"
#include "SymbolTable.h"
#include "ExpressionEvaluator.h"
#include "ProgramMemory.h"

class FlowControl {
public:
    FlowControl(SymbolTable& symbols, ExpressionEvaluator& evaluator, ProgramMemory& memory);

    bool handle(ASTNode* node);
    bool hasJump() const;
    int jumpTarget() const;
    void resetJump();

private:
    SymbolTable& symbolTable_;
    ExpressionEvaluator& evaluator_;
    ProgramMemory& programMemory_;

    bool jumpPending = false;
    int targetLine = -1;

    bool handleIf(ASTNode* node);
    bool handleGoto(ASTNode* node);
};
