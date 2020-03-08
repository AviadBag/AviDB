#pragma once

#include <iostream>
#include <string>

using namespace std;

class Data
{
    public:
		virtual string ToString() = 0;
		virtual string GetType() = 0;
		static char GetStartingSign() { return '0'; };
		static char GetEndingSign() { return '0'; };
};