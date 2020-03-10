//
// Created by aviad on 08/03/2020.
//

#pragma once

#include <string>
#include <ostream>
#include <vector>

#include "Array.h"
#include "DataBase.h"

using namespace std;

class Interpreter
{
    public:
        explicit Interpreter(const string& dataPath);

        bool EnterLine(const string& line);
    static vector<string> Split(const string& text, char splitBy);

    private:
        DataBase db;
        Array* mainArray;

        static void LogError(const string& error);

};