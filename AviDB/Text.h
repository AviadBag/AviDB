#pragma once

#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

class Text : public Data
{
    public:
        Text();
		explicit Text(const char*);
        explicit Text(string);
        
        // Getters
        string GetString(); // Returns str
        string ToString() override; // Returns "str"
        
        string GetType() override; // Returns "Text"
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
