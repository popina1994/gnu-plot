#define _CRTDBG_MAP_ALLOC
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif
#endif  // _DEBUG


#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include "Parser.h"
#include "Item.h"
#include "Operand.h"
#include "Operator.h"
#include "Nonary.h"
#include "Unary.h"
#include "Binary.h"
#include "UnaryClasses.h"
#include "BinaryClasses.h"

using namespace std;

int main() {
	InitialsPrecedence();
	_CrtDumpMemoryLeaks();
	return 0;
}