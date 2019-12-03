#pragma once

#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

class Text : public Data
{
    public:
        Text();
		Text(const char*);

        string ToString();

        //Operators overloading
        Text& operator=(Text&);
        Text& operator=(string&);
        Text& operator=(const char*);

        Text& operator+=(Text&);
        Text& operator+=(string&);
        Text& operator+=(const char*);

    private:
        string text;
};
