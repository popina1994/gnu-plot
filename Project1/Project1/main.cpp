#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif
#endif  // _DEBUG

#include <cstdlib>
#include <crtdbg.h>
#include <iostream>
#include "Parser.h"
#include "Operand.h"
#include "Item.h"
#include "Operator.h"
#include "Binary.h"

using namespace std;

int main() {
	cout << OPERATOR_PRECEDENCE[0] << endl;


	_CrtDumpMemoryLeaks();
	return 0;
}