#ifndef _OPERAND_H_
#define _OPERAND_H_
#include <string>
#include "Item.h" 

using namespace std;

// we'll see later if we can parametrize type of val
class Operand : public Item {
	string nameOfVariable;
	double val;
public:
	Operand(double _val, const string& _nameOfVariable);
	const string& GetName() const;
	const double& GetVal() const;
};
#endif