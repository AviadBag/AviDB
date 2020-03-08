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
		static char GetSeperator(); // Returns '&'
		static char GetStartingSign(); // Returns '{'
		static char GetEndingSign(); // Returns '}'
		static char GetEqualsSign(); // Returns '='

		string ToString();

	private:
		DictItem* GetItem(int);
		DictItem* GetItemByKey(string);
		DictItem* GetLastItem();
};