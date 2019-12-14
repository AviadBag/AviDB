#pragma once

#include "Data.h"
#include "Array.h"
#include "Dict.h"
#include "Text.h"

class Convert
{
	public:
		static const int INVALID_CAST_EXCEPTION = -3;

		static Array* ToArray(Data*);
		static Dict* ToDict(Data*);
		static Text* ToText(Data*s);
};

