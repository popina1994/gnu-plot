#ifndef _OPERAND_H_
#define _OPERAND_H_
#include "Item.h"

// we'll see later if we can parametrize type of val
class Operand : public Item {
	double val;
public:
	Operand(double _val);
};
#endif