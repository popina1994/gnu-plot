#ifndef _BINARY_CLASSES_H_
#define _BINARY_CLASSES_H_

#include "Binary.h"

class BinPlus : public Binary {
public:
	BinPlus(Operand* ptOperand1 = nullptr, Operand* ptOperand2 = nullptr);
	double CalculateOperation() const override;
}; 

class BinMinus : public Binary {
public:
	BinMinus(Operand* ptOperand1 = nullptr, Operand* ptOperand2 = nullptr);
	double CalculateOperation() const override;

};

class Multiple : public Binary {
public:
	Multiple(Operand* ptOperand1 = nullptr, Operand* ptOperand2 = nullptr);
	double CalculateOperation() const override;
};

class Divide : public Binary {
public:
	Divide(Operand* ptOperand1 = nullptr, Operand* ptOperand2 = nullptr);
	double CalculateOperation() const override;
};

class Power : public Binary {
public:
	Power(Operand* ptOperand1 = nullptr, Operand* ptOperand2 = nullptr);
	double CalculateOperation() const override;
};

#endif