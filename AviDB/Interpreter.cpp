//
// Created by aviad on 08/03/2020.
//

#include "Interpreter.h"


Interpreter::Interpreter(const string &dataPath) : db(dataPath)
{
    this->mainArray = db.GetData();
}

bool Interpreter::EnterLine(const string &line)
{
//    if ( !IsLegalCommand(line) )
//    {
//        LogError("Invalid input: " + line);
//        return false;
//    }

    return true;
}

void Interpreter::LogError(const string &error)
{
    cerr << "Error: " << error;
}

vector<string> Interpreter::Split(const string &text, char splitBy)
{
    vector<string> vct;
    string current;
    for (int i = 0; i < text.length(); i++)
    {
        if (vct[i] == string(1, splitBy))
        {
            vct.push_back(current);
            current = "";
        }
        else current += text[i];
    }

    vct.push_back(current);

    return vct;
}
