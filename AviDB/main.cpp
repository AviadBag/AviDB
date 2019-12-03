#include <iostream>
#include "Array.h"
#include "Text.h"

using namespace std;

int main()
{
	Text t1 = "Aviad Bagno";
	Text t2 = "Matanya Bagno";
	Array arr;
	arr.Add(t1);
	arr.Add(t2);

	cout << arr.Get(0).ToString();
}