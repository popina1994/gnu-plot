#ifndef _BINARY_H_
#define _BINARY_H_

#include <string>
#include "Operator.h"
#include "Operand.h"

using namespace std;

class Binary : public Operator {
protected:
	Operand* ptOperand1,* ptOperand2;
public:
	Binary(const string& name, Operand* _ptOperand1 = nullptr, Operand* _ptOperand2 = nullptr);

	void SetFirstOperand(Operand* _ptOperand);
	void SetSecondOperand(Operand* _ptOperand);


};

class Plus : public Binary {
	using Binary::Binary;
	double CalculateOperation() const override;

};

#endif




