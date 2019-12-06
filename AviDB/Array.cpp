#include "Array.h"

Array::Array()
{
    header = nullptr;
    count = 0;
}

Array::~Array()
{
	cout << "REMOVING";
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
    string str = "[\'" + Get(0)->ToString() + "\'&";
    for (int i = 0; i < GetCount() - 2; i++) str.append("\'" +  Get(i)->ToString() + "\'&" );
    str.append( '\'' + Get(GetCount() - 1)->ToString() + "\']" );

    return str;
}

int Array::GetCount() { return this->count; }

Data* Array::Get(int index)
{
    if (index < 0 || index > GetCount() - 1) throw Array::INVALID_INDEX_EXCEPTION;

    return GetItem(index)->GetData();
}

void Array::Add(Data* data)
{
    Item* item = new Item;
    item->SetData(data);

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

