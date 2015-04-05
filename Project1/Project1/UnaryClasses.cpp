#include "UnaryClasses.h"

double PlusUn::CalculateOperation() const
{
	return ptOperand->GetVal();
}
double MinusUn::CalculateOperation() const
{
	return -ptOperand->GetVal();
}

double Sin::CalculateOperation() const
{
	return sin(ptOperand->GetVal());
}
