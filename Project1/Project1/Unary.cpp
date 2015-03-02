#include "Unary.h"

Unary::Unary(const string& name, Operand* _ptOperand) : Operator(name, 1), ptOperand(_ptOperand) {}

void Unary::SetOperand(Operand* _ptOperand) {
	ptOperand = _ptOperand;
}