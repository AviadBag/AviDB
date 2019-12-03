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

string Array::ToString()
{
    string str = "[\'" + Get(0)->ToString() + "\'&";
    for (int i = 0; i < GetCount() - 2; i++) str.append("\'" +  Get(i)->ToString() + "\'&" );
    str.append( '\'' + Get(GetCount() - 1)->ToString() + "\']" );

    return str;
}

void Array::FreeList(Item* item)
{
    if (item->next != nullptr)
    {
        FreeList(item->next);
    }
    delete item;
}

int Array::GetCount() { return this->count; }

Data* Array::Get(int index)
{
    if (index < 0 || index > GetCount() - 1) throw Array::INVALID_INDEX_EXCEPTION;

    return GetItem(index)->data;
}

void Array::Add(Data* data)
{
    Item* item = new Item;
    item->data = data;
    item->next = nullptr;

    if (header == nullptr)
    {
        header = item;
    }
    else
    {
        Item* last = GetLastItem();
        last->next = item;
    }

    count++;
}

Item* Array::GetItem(int index)
{
    Item* current = header;
    for (int i = 0; i < index; i++) current = current->next;

    return current;
}

Item* Array::GetLastItem()
{
    return GetItem( GetCount() - 1 );
}

