#pragma once

#include "Array.h"
#include "DictItem.h"

class Dict : public Array
{
	public:
		const static int INVALID_KEY_EXCEPTION = -2;

		// Action method
		void Add(string, Data*);

		//Getters
		Data* GetByKey(string);

		string GetType() override; // Returns "Dict"
		static char GetSeparator(); // Returns '&'
		static char GetStartingSign(); // Returns '{'
		static char GetEndingSign(); // Returns '}'
		static char GetEqualsSign(); // Returns '='

		string ToString() override;

	private:
		DictItem* GetItemByKey(string);
        DictItem* GetItem(int) override;
        DictItem* GetLastItem() override;
};