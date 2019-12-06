#include "Dict.h"

void Dict::Add(string key, Data* data)
{
	DictItem* item = new DictItem(key, data);

	AddItem(item);
}

Data* Dict::GetByKey(string key)
{
	return GetItemByKey(key)->GetData();
}

DictItem* Dict::GetItem(int index)
{
	return static_cast<DictItem*>( Array::GetItem(index) );
}

DictItem* Dict::GetItemByKey(string key)
{
	for (int i = 0; i < GetCount(); i++)
	{
		DictItem* item = GetItem(i);
		if (item->GetKey() == key) return item;
	}
	
	throw INVALID_KEY_EXCEPTION;
}
