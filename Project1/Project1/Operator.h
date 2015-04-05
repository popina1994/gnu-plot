#ifndef _OPERATOR_H_
#define _OPERATOR_H_

#include <string>
#include "Item.h"

using namespace std;



class Operator : public Item {
	string nameOfOperator;
	int numOperand;
public:
	Operator(const string& _name, int _numOperand);
	Operator(const Operator&) = default;
	 
	Operator& operator=(const Operator&) = default;
	virtual double CalculateOperation() const = 0;
	virtual ~Operator() = 0;
	
	int NumberOfOperands() const;
	const string& GetNameOfOperator() const;	

	bool IsOperand() const override;
};

#endif