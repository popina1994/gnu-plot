#ifndef _UNARY_H_
#define _UNARY_H_

#include <string>
#include "Operator.h"
#include "Operand.h"

using namespace std;

class Unary : public Operator {
protected:
	Operand* ptOperand;
public:
	Unary(const string& name, Operand* _ptOperand = nullptr); // name of operator, and operand
	void SetOperand(Operand* _ptOperand);
	virtual double CalculateOperation() const = 0;
};




#endif


