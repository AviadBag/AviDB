#include "Parser.h"

Array* Parser::Parse(string data)
{
	if ( GetStringType(data) != Types::ARRAY) // There is no main array!
		throw INVALID_DATA_EXCEPTION;

	return ParseArray(data);
}

Array* Parser::ParseArray(string data)
{
	Array* arr = new Array;
	string sub_data = RemoveStartEnd(data);

	vector<string> elements = DataSplitter(sub_data, Array::GetSeparator());

	for (int i = 0; i < elements.size(); i++)
	{
		string element = elements[i];
		Types t = GetStringType(element);

		arr->Add( ParseStringUsingGivenType(element, t) );
	}

	return arr;
}

Dict* Parser::ParseDict(string data)
{
	Dict* dict = new Dict;
	string sub_data = RemoveStartEnd(data);

	vector<string> elements = DataSplitter(sub_data, Dict::GetSeparator());

	for (int i = 0; i < elements.size(); i++)
	{
		string element = elements[i];
		vector<string> d = DataSplitter(element, Dict::GetEqualsSign());
		string key = d[0];
		string value = d[1];

		Types t = GetStringType(value);
		dict->Add( key, ParseStringUsingGivenType(value, t) );
	}

	return dict;
}

Text* Parser::ParseText(string text)
{
	return new Text( RemoveStartEnd(text) );
}

vector<string> Parser::DataSplitter(string originalText, char c)
{
	vector<string> vctr;
	string item;
	char signs[] = { 0, 0, 0 }; // [0] = Array, [1] = Dict, [2] = Text

	for (int i = 0; i < originalText.size(); i++)
	{
		char currentChar = originalText[i];
		Types signType = GetSignType(currentChar);

		if (signType != Types::INVALID)
		{
			if (signType == Types::ARRAY)
			{
				if (IsStartingSign(currentChar)) signs[0]++;
				else signs[0]--;
			}
			if (signType == Types::DICT)
			{
				if (IsStartingSign(currentChar)) signs[1]++;
				else signs[1]--;
			}
			// Either StratingType and EndingType are ' ...
			if (signType == Types::TEXT)
			{
				// If it out, and we need to get in
				if (signs[2] % 2 == 0) signs[2]++;
				else signs[2]--;
			}
		}
		 
		if (currentChar == c && signs[0] == 0 && signs[1] == 0 && signs[2] == 0)
		{
			vctr.push_back(item);
			item = "";
		}
		else
		{
			item.append( string(1, currentChar) );
		}
	}

	vctr.push_back(item); // Push the last item. 

	return vctr;
}

Parser::Types Parser::GetStringType(string data)
{
	char start = data.at(0);
	char end = data.at(data.size() - 1);

	if (start == Array::GetStartingSign() && end == Array::GetEndingSign())
	{
		return Types::ARRAY;
	}
	else if (start == Dict::GetStartingSign() && end == Dict::GetEndingSign())
	{
		return Types::DICT;
	}
	else if (start == Text::GetStartingSign() && end == Text::GetEndingSign())
	{
		return Types::TEXT;
	}

	throw INVALID_DATA_EXCEPTION;
}

Parser::Types Parser::GetSignType(char c)
{
	if (c == Array::GetStartingSign() || c == Array::GetEndingSign())
	{
		return Types::ARRAY;
	}
	else if (c == Dict::GetStartingSign() || c == Dict::GetEndingSign())
	{
		return Types::DICT;
	}
	else if (c == Text::GetStartingSign() || c == Text::GetEndingSign())
	{
		return Types::TEXT;
	}

	return Types::INVALID;
}

string Parser::RemoveStartEnd(string data)
{
	return data.substr(1, data.size() - 2);
}

Data* Parser::ParseStringUsingGivenType(string data, Types t)
{
	switch (t)
	{
		case Types::ARRAY:
			return ParseArray(data);
			break;
		case Types::DICT:
			return ParseDict(data);
			break;
		case Types::TEXT:
			return ParseText(data);
			break;
		default:
			return nullptr;
	}
}

int Parser::IsStartingSign(char c)
{
	return (
		c == Array::GetStartingSign()
		||
		c == Dict::GetStartingSign()
		||
		c == Text::GetStartingSign()
	);
}

char Parser::GetEndingSign(const char c)
{
	if (c == Array::GetStartingSign()) return Array::GetEndingSign();
	else if (c == Dict::GetStartingSign()) return Dict::GetEndingSign();
	else if (c == Text::GetStartingSign()) return Text::GetEndingSign();

	throw -6;
}
