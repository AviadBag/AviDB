#pragma once

#include <iostream>
#include <string>

#include "Array.h"
#include "Text.h"
#include "Dict.h"

using namespace std;

class DataBase
{
	public:
		explicit DataBase(string);

		Array* GetData();
		void SetData(Array*);

		void Save();

	private:
		string fileName;
		Array* data;
};

