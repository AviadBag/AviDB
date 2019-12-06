#include <iostream>
#include "Array.h"
#include "Text.h"
#include "Dict.h"
#include "DictItem.h"

using namespace std;

int main()
{
	Text* t1 = new Text("Aviad Bagno");
	Text* t2 = new Text("Matanya Bagno");

	Dict d;
	d.Add("aviad", t1);
	d.Add("matanya", t2);

	delete t1, t2;
}