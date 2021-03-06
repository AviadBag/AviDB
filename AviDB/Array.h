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

        string GetType() override; // Returns "Array"
        static char GetSeparator(); // Returns ','
        static char GetStartingSign(); // Returns '['
        static char GetEndingSign(); // Returns ']'

        string ToString() override;

        // Action methods
        void Add(Data*); // The data should be dynamic allocated

        const static int INVALID_INDEX_EXCEPTION = -1;

	protected:
		// Action methods
		void AddItem(Item*);

		// Getters
        virtual Item* GetItem(int);
		virtual Item* GetLastItem();

    private:
        //Member vars
        int count;
        Item* header;

        void FreeList(Item*);
};
