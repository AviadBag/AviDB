#pragma once

#include <iostream>
#include <string>

using namespace std;

class Data
{
    public:
		virtual string ToString() = 0;
		static string GetType() { return string(); };
		static char GetStartingSign() { return '0'; };
		static char GetEndingSign() { return '0'; };
};