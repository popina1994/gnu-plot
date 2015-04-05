#include "BinaryClasses.h"
#include <cmath>

using namespace std;

BinPlus::BinPlus(Operand* ptOperand1, Operand* ptOperand2) : Binary("+", ptOperand1, ptOperand2) {}

double BinPlus::CalculateOperation() const {
	return ptOperand1->GetVal() + ptOperand2->GetVal();
}

BinMinus::BinMinus(Operand* ptOperand1, Operand* ptOperand2) : Binary("-", ptOperand1, ptOperand2) {}

double BinMinus::CalculateOperation() const {
	return ptOperand1->GetVal() - ptOperand2->GetVal();
}

Multiple::Multiple(Operand* ptOperand1, Operand* ptOperand2) : Binary("*", ptOperand1, ptOperand2) {}

double Multiple::CalculateOperation() const {
	return ptOperand1->GetVal() * ptOperand2->GetVal();
}

Divide::Divide(Operand* ptOperand1, Operand* ptOperand2) : Binary("/", ptOperand1, ptOperand2) {}

double Divide::CalculateOperation() const {
	return ptOperand1->GetVal() / ptOperand2->GetVal(); // division with zero, see what to do
}

Power::Power(Operand* ptOperand1, Operand* ptOperand2) : Binary("^", ptOperand1, ptOperand2) {}

double Power::CalculateOperation() const {
	return pow(ptOperand1->GetVal(), ptOperand2->GetVal());
}

