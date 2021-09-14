#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "JSONLECTOR.h"
#include <fstream>
#include <string.h>
#include<string>

using namespace std;

string JSONLECTOR::JSONReader()
{

    ifstream file("ginko.txt", ios::binary);
    string fileStr;

    istreambuf_iterator<char> inputIt(file), emptyInputIt;
    back_insert_iterator<string> stringInsert(fileStr);

    copy(inputIt, emptyInputIt, stringInsert);

    return fileStr;

	return 0;
}

JSONLECTOR::JSONLECTOR()
{

}

JSONLECTOR::~JSONLECTOR()
{
    
}
