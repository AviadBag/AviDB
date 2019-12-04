#include <iostream>
#include "Array.h"
#include "Text.h"
#include "Dict.h"

using namespace std;

int main()
{
	Text* t1 = new Text("Aviad");
	Text* t2 = new Text("Matanya");

	Dict* dict = new Dict();
	dict->Add("k1", t1);
	dict->Add("k2", t1);
	cout << dict->GetByKey("k1")->ToString();

	delete t1, t2, dict;
}