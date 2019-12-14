#include <iostream>

#include "pch.h"
#include "CppUnitTest.h"

#include "../AviDB/Array.h"
#include "../AviDB/Array.cpp"
#include "../AviDB/Dict.h"
#include "../AviDB/Dict.cpp"
#include "../AviDB/Text.h"
#include "../AviDB/Text.cpp"

#include "../AviDB/Data.h"
#include "../AviDB/Item.cpp"
#include "../AviDB/DictItem.cpp"

#include "../AviDB/Parser.h"
#include "../AviDB/Parser.cpp"

#include "../AviDB/Convert.h"
#include "../AviDB/Convert.cpp"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AviDBTEST
{
	TEST_CLASS(AviDBTEST)
	{
	public:
		TEST_METHOD(TestSignesGetters)
		{
			Assert::AreEqual(Array::GetStartingSign(), '[');
			Assert::AreEqual(Array::GetEndingSign(), ']');

			Assert::AreEqual(Dict::GetStartingSign(), '{');
			Assert::AreEqual(Dict::GetEndingSign(), '}');

			Assert::AreEqual(Text::GetStartingSign(), '\'');
			Assert::AreEqual(Text::GetEndingSign(), '\'');
		}

		TEST_METHOD(TestSeperatorsGetters)
		{
			Assert::AreEqual(Array::GetSeperator(), ',');
			Assert::AreEqual(Dict::GetSeperator(), '&');
		}

		TEST_METHOD(TestArrayParser)
		{
			string data = "['1','2','3']";
			Array* arr = Parser::ParseArray(data);

			Assert::AreEqual(string("\'1\'"), arr->Get(0)->ToString());

			delete arr->Get(0), arr->Get(1), arr->Get(2), arr;
		}

		TEST_METHOD(TestDictParser)
		{
			string data = "{k1='a'&k2='b'&k3=['aviad_arr','matanya_arr']}";
			Dict* d = Parser::ParseDict(data);
			
			Array* arr = Convert::ToArray( d->GetByKey("k3") );
			Assert::AreEqual(string("\'aviad_arr\'"), arr->Get(0)->ToString());

			delete d->Get(0);
			delete d->Get(1);
			delete arr->Get(0);
			delete arr->Get(1);
			delete arr;
			delete d;
		}

		TEST_METHOD(TestSplit)
		{
			string text = "'Aviad'&'Matanya'&['Aviad'&'Matanya']&{t1'Aviad'&arr['Aviad'&'Matanya']}";
			vector<string> vctr = Parser::DataSplitter(text, '&');
			for (int i = 0; i < vctr.size(); i++)
			{
				Logger::WriteMessage(vctr[i].c_str());
				Logger::WriteMessage("\n");
			}
		}
	};
}
