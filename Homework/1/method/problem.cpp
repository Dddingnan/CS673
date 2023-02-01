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

// Assignment 4
void checkIsPalindrome(string str)
{
    cout << "String: " << str;
    bool isPalindrome = false;
    for (size_t i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            isPalindrome = false;
            break;
        }
        isPalindrome = true;
    }
    if (isPalindrome == true)
    {
        cout << " is a palindrome." << endl;
    }
    else
    {
        cout << " is not a palindrome." << endl;
    }
};