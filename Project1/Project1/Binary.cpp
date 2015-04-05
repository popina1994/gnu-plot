#include "Binary.h"
#include "Operator.h"

Binary::Binary(const string& name, Operand* _ptOperand1, Operand* _ptOperand2) : Operator(name, 2), ptOperand1(_ptOperand1), 
ptOperand2(_ptOperand2){}

void Binary::SetFirstOperand(Operand* ptOperand) {
	ptOperand = ptOperand1;
}

void Binary::SetSecondOperand(Operand* ptOperand) {
	ptOperand2 = ptOperand;
}

double	 Plus::CalculateOperation() const {
	return ptOperand1->GetVal() + ptOperand2->GetVal();
}

double	 Minus::CalculateOperation() const {
	return ptOperand1->GetVal() - ptOperand2->GetVal();
}

double	 Multiple::CalculateOperation() const
{
	return ptOperand1->GetVal() * ptOperand2->GetVal();
}
double	 Devide::CalculateOperation() const
{
	return ptOperand1->GetVal() / ptOperand2->GetVal();
}
