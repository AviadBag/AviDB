#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "Array.h"
#include "Text.h"
#include "Dict.h"
#include "Convert.h"

using namespace std;

class Parser
{
	public:
		const static int INVALID_DATA_EXCEPTION = -999;

		static Array* Parse(string);
		static Dict* ParseDict(string); // Sould be private
		static Array* ParseArray(string); // Sould be private

		static vector<string> DataSplitter(string, char); // Sould be private
	private:
		enum class Types
		{
			ARRAY,
			DICT,
			TEXT,
			INVALID
		};

		static Text* ParseText(string);
		static Types GetStringType(string);
		static Types GetSignType(char);
		static string RemoveStartEnd(string);

		static Data* ParseStringUsingGivenType(string, Types);

		static int IsStartingSign(char);
		static char GetEndingSign(char);
};

