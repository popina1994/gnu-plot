#ifndef _UnaryClasses_h_
#define _UnaryClasses_h_


#include "Unary.h"



class MinusUn : Unary
{
public:
	MinusUn();
	double CalculateOperation() const;
};

class PlusUn : Unary{

public:
	PlusUn();
	double CalculateOperation() const;
};

class Sin : public Unary{
public:
	Sin(string & name);
	virtual double CalculateOperation() const;
};

#endif