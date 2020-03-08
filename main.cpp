#include <iostream>

#include "AviDB/Array.h"
#include "AviDB/Text.h"
#include "AviDB/Convert.h"
#include "AviDB/Parser.h"
#include "AviDB/IO.h"

using namespace std;

int main()
{
	
	Text* t1 = new Text("Aviad");
	Text* t2 = new Text("Matanya");

	Array* innerArr = new Array;
	innerArr->Add(t1);
	innerArr->Add(t2);

	Dict* innerDict = new Dict;
	innerDict->Add("it1", t1);
	innerDict->Add("it2", t2);

	Dict* innerInnerDict = new Dict;
	innerInnerDict->Add("it11", t1);
	innerInnerDict->Add("it22", t2);

	innerDict->Add("dict", innerInnerDict);

	Dict* d = new Dict;
	d->Add("t1", t1);
	d->Add("t2", t2);
	d->Add("arr", innerArr);
	d->Add("dict", innerDict);

	Array mainArr;
	mainArr.Add(d);
	cout << mainArr.ToString() << endl;
	
	Array* parsedArr = Parser::Parse(mainArr.ToString());
	cout << parsedArr->ToString();

	delete innerArr, t1, t2, innerDict, innerInnerDict, d, parsedArr;
	
}