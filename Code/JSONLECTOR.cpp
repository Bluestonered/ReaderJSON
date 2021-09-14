/*
Author: Hugo FOULON & Maxime ACCURSI
 born date: 12 september 2021
 last Update : 14 september 2021
 NAME : JSONLECTOR.cpp
 description:
 */
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "JSONLECTOR.h"
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

string JSONLECTOR::JSONReader()
{

    ifstream file("ginko.txt", ios::binary);
    string fileStr;

    istreambuf_iterator<char> inputIt(file), emptyInputIt;
    back_insert_iterator<string> stringInsert(fileStr);

    copy(inputIt, emptyInputIt, stringInsert);

    return fileStr;
}

JSONLECTOR::JSONLECTOR()
{
}

JSONLECTOR::~JSONLECTOR()
{

}
