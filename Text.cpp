#include "Text.h"

Text::Text() : Text("") {}

Text::Text(const char* firstText) : text(firstText) {}

Text::Text(string firstText) : text(firstText) {}

string Text::GetString() { return text; }
string Text::GetType() { return "Text"; }

string Text::ToString() { return GetStartingSign() + GetString() + GetEndingSign(); }

char Text::GetStartingSign() { return '\''; }
char Text::GetEndingSign() { return '\''; }

// Operators overloading
// Assignments operator
Text& Text::operator=(Text& newText)
{
    if (this == &newText) // If this is the same ADDRESS as newText
        return *this;

    text = newText.ToString();
    return *this;
};

Text& Text::operator=(string& newText)
{
    text = newText;
    return *this;
}

Text& Text::operator=(const char* charArray)
{
	text = string(charArray);
	return *this;
}

// += operator
Text& Text::operator+=(Text& toAppend)
{
    text.append(toAppend.ToString());
    return *this;
}

Text& Text::operator+=(string& toAppend)
{
    text.append(toAppend);
    return *this;
}

Text& Text::operator+=(const char* charArray)
{
	string str(charArray);
	text.append(str);
	return *this;
}
