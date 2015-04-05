#include "Priority.h"

Priority::Priority(int _inputP, int _stackP) : inputPriority(_inputP), stackPriority(_stackP){}

Priority::Priority(const Priority & _other)
{
	inputPriority = _other.inputPriority;
	stackPriority = _other.stackPriority;
}