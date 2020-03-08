#pragma once

#include <iostream>
#include <string>

#include "Item.h"

using namespace std;

class DictItem : public Item
{
	public:
		DictItem(string, Data*);

		// Getter
		string GetKey();

		//Setter
		void SetKey(string);

	private:
		string key;
};

