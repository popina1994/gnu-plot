#ifndef _UNARY_CLASSES_H_
#define _UNARY_CLASSES_H_


#include "Unary.h"

class MinusUn : Unary {
public:
	MinusUn(Operand* ptOperand);
	double CalculateOperation() const override;
};

class PlusUn : Unary {

public:
	PlusUn(Operand* ptOperand);
	double CalculateOperation() const override;
};

class Sin : public Unary {
public:
	Sin(Operand* ptOperand);
	virtual double CalculateOperation() const override;
};

#endif