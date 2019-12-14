#include "Array.h"

Array::Array()
{
    header = nullptr;
    count = 0;
}

Array::~Array()
{
    FreeList(header); // Free all the list.
}

void Array::FreeList(Item* item)
{
	if (item->GetNext() != nullptr)
	{
		FreeList(item->GetNext());
	}
	delete item;
}

string Array::ToString()
{
	string str = "";
	str.append( string(1, GetStartingSign()) );
	for (int i = 0; i < GetCount(); i++)
	{
		Item* item = GetItem(i);
		str.append(item->GetData()->ToString());

		if (i < GetCount() - 1) str.append( string(1, GetSeperator() ));
	}

	str.append( string(1, GetEndingSign()) );

	return str;
}

int Array::GetCount() { return this->count; }

string Array::GetType() { return "Array"; }

char Array::GetSeperator() { return ','; }

char Array::GetStartingSign() { return '['; }
char Array::GetEndingSign() { return ']'; }

Data* Array::Get(int index)
{
    if (index < 0 || index > GetCount() - 1) throw Array::INVALID_INDEX_EXCEPTION;

    return GetItem(index)->GetData();
}

void Array::Add(Data* data)
{
    Item* item = new Item(data);

	AddItem(item);
}

void Array::AddItem(Item* item)
{
	if (header == nullptr)
	{
		header = item;
	}
	else
	{
		Item* last = GetLastItem();
		last->SetNext(item);
	}

	count++;
}

Item* Array::GetItem(int index)
{
    Item* current = header;
    for (int i = 0; i < index; i++) current = current->GetNext();

    return current;
}

Item* Array::GetLastItem()
{
    return GetItem( GetCount() - 1 );
}

