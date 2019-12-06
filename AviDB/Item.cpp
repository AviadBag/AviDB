#include "Item.h"

Item::Item() 
{
	data = nullptr;
	next = nullptr;
}

Item::Item(Data* d)
{
	data = d;
	next = nullptr;
}

Data* Item::GetData() { return data; }

Item* Item::GetNext() { return next; }

void Item::SetData(Data* d) { data = d; }

void Item::SetNext(Item* item) { next = item; }
