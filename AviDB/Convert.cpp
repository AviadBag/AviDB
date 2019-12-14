#include "Convert.h"

Array* Convert::ToArray(Data* d)
{
	Array* arr = dynamic_cast<Array*>(d);
	if (arr == nullptr) throw INVALID_CAST_EXCEPTION;

	return arr;
}

Dict* Convert::ToDict(Data* d)
{
	Dict* dict = dynamic_cast<Dict*>(d);
	if (dict == nullptr) throw INVALID_CAST_EXCEPTION;

	return dict;
}

Text* Convert::ToText(Data* d)
{
	Text* text = dynamic_cast<Text*>(d);
	if (text == nullptr) throw INVALID_CAST_EXCEPTION;

	return text;
}
