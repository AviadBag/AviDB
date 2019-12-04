#include "Dict.h"

void Dict::Add(string key, Data* data)
{
	Item* item = new Item;
	item->key = key;
	item->data = data;

	AddItem(item);
}

Data* Dict::GetByKey(string key)
{
	return GetItemByKey(key)->data;
}

Item* Dict::GetItemByKey(string key)
{
	for (int i = 0; i < GetCount(); i++)
	{
		Item* item = GetItem(i);
		if (item->key == key) return item;
	}
	
	throw INVALID_KEY_EXCEPTION;
}
