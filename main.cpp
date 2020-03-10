#include <iostream>

#include "AviDB/Interpreter.h"

using namespace std;

int main()
{
	Interpreter interpreter("C://Programming/Projects/C++/AviDB/data.avidb");
	interpreter.EnterLine("test 1");

	vector<string> vct = interpreter.Split("a b c d", ' ');
	for (int i = 0; i < vct.size(); i++) cout << vct[i] << endl;
}
