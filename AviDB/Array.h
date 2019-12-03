#pragma once

#include "Data.h"
#include "Text.h"

struct Item
{
    Data* data;
    Item* next;
};

class Array : public Data
{
    public:
        Array();
        ~Array();

        // Getters
		Data* Get(int);

        int GetCount();
        string ToString();

        // Action methods
        void Add(Data*); // The data should be dynamic allocated

        const static int INVALID_INDEX_EXCEPTION = -1;

    private:
        //Member vars
        int count;
        Item* header;

        // Getters
        Item* GetItem(int);
        Item* GetLastItem();

        void FreeList(Item*);
};
