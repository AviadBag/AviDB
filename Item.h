#pragma once

#include "Data.h"

class Item
{
	public:
		Item(Data*);

		// Getters
		Data* GetData();
		virtual Item* GetNext();

		// Setters
		void SetData(Data*);
		virtual void SetNext(Item*);

	protected:
		Data* data;		
		Item* next;
};