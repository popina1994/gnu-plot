#ifndef _ITEM_H_
#define _ITEM_H_

class Item {
public:
	virtual ~Item() = 0;
	virtual bool IsOperand() const = 0;
};

#endif