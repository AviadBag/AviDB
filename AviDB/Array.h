#pragma once

#include "Data.h"

struct Item
{
    Data data;
    Item* next;
};

class Array : public Data
{
    public:
        Array();
        ~Array();

        // Getters
        int GetCount();
        Data Get(int);
        string ToString();

        // Action methods
        void Add(Data);

        const static int INVALID_INDEX_EXCEPTION = -1;

    private:
        //Member vars
        int count;
        Item* header;

        char* stringData;

        // Getters
        Item* GetItem(int);
        Item* GetLastItem();

        void FreeList(Item*);
};
