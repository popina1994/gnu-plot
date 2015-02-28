#ifndef _BINARY_H_
#define _BINARY_H_

#include <string>
#include "Operator.h"
#include "Operand.h"

using namespace std;

class Binary : public Operator {
	Operand* ptOperand1,* ptOperand2;
public:
	Binary(const string& name, Operand* _ptOperand1, Operand* _ptOperand2);
};

#endif