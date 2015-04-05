#include "Nonary.h"
#include <cmath>

using namespace std;

LeftBracket::LeftBracket() : Operator("(", 0) {}

double LeftBracket::CalculateOperation() const {
	return nan(""); // if something goes wrong, and we have nan
}

RightBracket::RightBracket() : Operator(")", 0) {}

double RightBracket::CalculateOperation() const {
	return nan("");
}