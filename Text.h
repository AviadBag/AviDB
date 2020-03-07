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
        Text(string);
        
        // Getter
        string GetString(); // Returns str
        virtual string ToString(); // Returns "str"
        
        string GetType(); // Returns "Text"
        static char GetStartingSign(); // Returns '\''
        static char GetEndingSign(); // Returns ALSO '\''

        // Operators overloading
        Text& operator=(Text&);
        Text& operator=(string&);
        Text& operator=(const char*);

        Text& operator+=(Text&);
        Text& operator+=(string&);
        Text& operator+=(const char*);

    private:
        string text;
};
