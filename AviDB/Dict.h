#pragma once

#include "Array.h"

struct Item
{
	Item() : next(nullptr) {}

	string key;
	Data* data;

	Data* next;
};

class Dict : public Array
{
	public:
		void Add(string, Data*);
		Data* GetByKey(string);

		const static int INVALID_KEY_EXCEPTION = -2;

	private:
		Item* GetItemByKey(string);
};