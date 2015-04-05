#ifndef _Priority_h_
#define _Priority_h_


class Priority 
{
private:
	int inputPriority;
	int stackPriority;
public:
	Priority() = default;
	Priority(int _inputP, int _stackP);
	Priority(const Priority & _other);
};




#endif