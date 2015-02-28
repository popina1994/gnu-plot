#include "Unary.h"

Unary::Unary(const string& name, Operand* _ptOperand) : Operator(name, 1), ptOperand(_ptOperand) {}