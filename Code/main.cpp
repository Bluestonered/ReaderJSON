/*
Author: Hugo FOULON & Maxime ACCURSI
 born date: 12 september 2021
 last Update : 14 september 2021
 NAME : main.cpp
 description:
 */
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string.h>
#include <string>

#include "JSONLECTOR.h"

using namespace std;

int main(int argc, char* argv[])
{
    JSONLECTOR OldBuffer;
    string Buffer;

    while (1)
    {
        FILE* file = popen("wget api.ginko.voyage/TR/getTempsLieu.do?idArret=CVIOTTE1 -O ginko.txt","r");

        Buffer = OldBuffer.JSONReader();
        
        pclose(file);
        sleep(1);
    }
   

    return 0;
}