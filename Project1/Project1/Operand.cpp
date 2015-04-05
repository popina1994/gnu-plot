#include "Operand.h"

Operand::Operand(double _val, const string& _nameOfVariable) : val(_val), nameOfVariable(_nameOfVariable) {}

const string& Operand::GetName() const { return nameOfVariable; }

const double& Operand::GetVal() const { return val;  }

bool Operand::IsOperand() const {
	return true;
}