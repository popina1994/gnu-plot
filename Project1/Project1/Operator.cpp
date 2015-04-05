#include "Operator.h"

extern const int NUM_OPERATORS = 3;
extern const int OPERATOR_PRECEDENCE[NUM_OPERATORS] = { 1, 2 };



Operator::Operator(const string& _name, int _numOperand) : nameOfOperator(_name), numOperand(_numOperand) {}

Operator::~Operator() {}

int Operator::NumberOfOperands() const {
	return numOperand;
}

int Operator::Rank() const {
	return 1 - NumberOfOperands();
}

const string& Operator::GetNameOfOperator() const {
	return nameOfOperator;
}

bool Operator::IsOperand() const {
	return true;
}

map <string, Priority> m;

void InitialsPrecedence() {
	m["+"] = Priority(2, 2);
	m["-"] = Priority(2, 2);
	m["*"] = Priority(3, 3);
	m["/"] = Priority(3, 3);
	m["^"] = Priority(5, 4);
	m["sin"] = Priority(7, 6);
	m["++"] = Priority(9, 8);
	m["--"] = Priority(9, 8);
	m["("] = Priority(10, 0);
	m[")"] = Priority(1, 0);
}