#pragma once

#include "Item.h"
#include "Data.h"
#include "Text.h"

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

	protected:
		// Action methods
		void AddItem(Item*);

		// Getters
		Item* GetItem(int);
		Item* GetLastItem();

    private:
        //Member vars
        int count;
        Item* header;

        void FreeList(Item*);
};
