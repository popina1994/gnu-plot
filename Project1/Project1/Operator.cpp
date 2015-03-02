#include "Operator.h"

extern const int NUM_OPERATORS;
extern const int OPERATOR_PRECEDENCE[NUM_OPERATORS] = { 1, 2 };

Operator::Operator(const string& _name, int _numOperand) : nameOfOperator(_name), numOperand(_numOperand) {}

Operator::~Operator() {}

int Operator::NumberOfOperands() const {
	return numOperand;
}

const string& Operator::GetNameOfOperator() const {
	return nameOfOperator;
}