#include <iostream>
#include "Array.h"
#include "Text.h"

using namespace std;

int main()
{
	Text t;
	string s = "abc";
	t += s;
	cout << t.ToString();
}