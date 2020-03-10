#include <iostream>

#include "AviDB/Interpreter.h"

using namespace std;

int main()
{
	Interpreter interpreter("C://Programming/Projects/C++/AviDB/data.avidb");
	interpreter.EnterLine("test 1");
}
