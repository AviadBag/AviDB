#pragma once

#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

class Text : public Data
{
    public:
        Text();

        string ToString();

        //Operators overloading
        Text& operator=(Text&);
        Text& operator=(string&);

        Text& operator+=(Text&);
        Text& operator+=(string&);

    private:
        string text;
};
