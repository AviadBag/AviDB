#pragma once

#include "Array.h"
#include "DictItem.h"

class Dict : public Array
{
	public:
		void Add(string, Data*);
		Data* GetByKey(string);

		const static int INVALID_KEY_EXCEPTION = -2;

	private:
		DictItem* GetItem(int);
		DictItem* GetItemByKey(string);
};