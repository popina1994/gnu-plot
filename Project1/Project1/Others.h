#ifndef _Others_h_
#define _Others_h_

#include <iostream>
#include <string>
#include "Item.h"
#include <vector>
using namespace std;

vector <Item*>* readFromEntry();


class MemoryAllocator{
public:
	MemoryAllocator* Instance();
	vector<Item*>& ReturnVector();
	void Alocate();
	~MemoryAllocator();
private:
	void Dealocate();
	MemoryAllocator();
	vector<Item*>* tmpItems;
	static MemoryAllocator* instance;
};

/*void ReadShit() {

	MemoryAlocator::Alocate();
	vecotr <Item*>& v = MemoryAllocator::ReturnVector()
	
}*/


#endif


