#include <iostream>
#include "Array.h"
#include "Text.h"

using namespace std;

int main()
{
	Text* t1 = new Text("Aviad Bagno");
	Text* t2 = new Text("Matanya Bagno");

	Array* nestedArr = new Array();
	Text* t3 = new Text("Nurit Bagno");
	Text* t4 = new Text("Nitay Bagno");
	nestedArr->Add(t3);
	nestedArr->Add(t4);

	Array arr;
	arr.Add(t1);
	arr.Add(t2);
	arr.Add(nestedArr);

	

	delete t1, t2, t3, t4, nestedArr;
}