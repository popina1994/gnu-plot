#include "Others.h"



vector<Item*>* readFromEntry(){

	string str;
	
	getline(cin, str);



	return nullptr;

}

MemoryAllocator* MemoryAllocator::instance = nullptr;

MemoryAllocator* MemoryAllocator::Instance()
{
	if (!instance) 
	{
		instance = new MemoryAllocator();
		return instance;
	}
	return instance;
}

MemoryAllocator::MemoryAllocator()
{
	tmpItems = nullptr;
}
vector<Item*>& MemoryAllocator::ReturnVector()
{
	return *tmpItems;
}
void MemoryAllocator::Alocate()
{
	Dealocate();
	tmpItems = new vector < Item* > ;
}
void MemoryAllocator::Dealocate()
{
	if (tmpItems)
	{
		for (auto i : *tmpItems)
		{
			delete i;
		}
	}
}