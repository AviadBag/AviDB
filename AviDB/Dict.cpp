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

string Dict::GetType()
{
	return "Dict";
}

char Dict::GetSeperator() { return '&'; }

char Dict::GetStartingSign() { return '{'; }
char Dict::GetEndingSign() { return '}'; }

char Dict::GetEqualsSign() { return '='; }

string Dict::ToString()
{
	string str = string(1, GetStartingSign());
	for (int i = 0; i < GetCount(); i++)
	{
		DictItem* item = GetItem(i);
		str.append(item->GetKey());
		str.append( string(1, GetEqualsSign()) );
		str.append(item->GetData()->ToString());

		if (i < GetCount() - 1) str.append( string(1, GetSeperator()) );
	}

	str.append( string(1, GetEndingSign()) );

	return str;
}

DictItem* Dict::GetItem(int index)
{
	return static_cast<DictItem*>( Array::GetItem(index) );
}

DictItem* Dict::GetLastItem()
{
	return static_cast<DictItem*>( Array::GetLastItem() );
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
