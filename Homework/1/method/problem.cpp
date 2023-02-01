#include <iostream>
#include <array>

#include "problem.h"

using namespace std;

// Assignment 2
void printString(string word)
{
    cout << word << endl;
};
// Assignment 3
void getMultiplicationTable(int startNumber, int endNumber)
{
    string ss = "";
    for (size_t i = startNumber; i <= endNumber; i++)
    {
        cout << "Table " << i << ": " << endl;
        for (size_t j = startNumber; j <= endNumber; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "" << endl;
    }
};
