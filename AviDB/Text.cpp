#include "Text.h"

Text::Text() : Text("") {}

Text::Text(const char* firstText) : text(firstText) {}

string Text::ToString() { return text; }

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
