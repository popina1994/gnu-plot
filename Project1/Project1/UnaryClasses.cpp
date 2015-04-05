#include "UnaryClasses.h"
#include <cmath>

using namespace std;

// we'll se later what shall we do with with unary signs
MinusUn::MinusUn(Operand* ptOperand) : Unary("--", ptOperand) {}

double MinusUn::CalculateOperation() const {
	return -ptOperand->GetVal();
}

PlusUn::PlusUn(Operand* ptOperand) : Unary("++", ptOperand) {}

double PlusUn::CalculateOperation() const {
	return ptOperand->GetVal();
}

Sin::Sin(Operand* ptOperand) : Unary("sin", ptOperand) {}

double Sin::CalculateOperation() const {
	return sin(ptOperand->GetVal());
}
