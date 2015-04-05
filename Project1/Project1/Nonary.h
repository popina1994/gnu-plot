#ifndef _NONARY_H_
#define _NONARY_H_

#include "Operator.h"

class LeftBracket : public Operator {
public:
	LeftBracket();
	double CalculateOperation() const override;

};

class RightBracket : public Operator {
public:
	RightBracket();
	double CalculateOperation() const override;
};

#endif 