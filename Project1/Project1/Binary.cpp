#include "Binary.h"

Binary::Binary(const string& name, Operand* _ptOperand1, Operand* _ptOperand2) : Operator(name, 2), ptOperand1(_ptOperand1), 
ptOperand2(_ptOperand2){}

