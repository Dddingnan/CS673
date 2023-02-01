#include <iostream>
#include <vector>
#include <string>

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

// Assignment 5
void combineList(vector<char> arr1, vector<int> arr2)
{
    int maxLength = 3;
    vector<char> totalList;
    for (size_t i = 0; i < maxLength; i++)
    {
        totalList.push_back(arr1[i]);
        totalList.push_back('0' + arr2[i]);
    }
    cout << "[";
    for (size_t i = 0; i < totalList.size(); i++)
    {
        cout << totalList[i];
        if (totalList.size() - 1 != i)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;
};

// Assignment 6
void getFibonacciNumber(int number)
{
    vector<unsigned long long int> totalList;
    for (size_t i = 0; i < number; i++)
    {
        if (i == 0)
        {
            totalList.push_back(i + 1);
        }
        else if (i == 1)
        {
            totalList.push_back(0 + totalList[i - 1]);
        }
        else
        {
            unsigned long long int total = totalList[i - 2] + totalList[i - 1];
            totalList.push_back(total);
        }
    }
    cout << "[";
    for (size_t i = 0; i < totalList.size(); i++)
    {
        cout << totalList[i];
        if (totalList.size() - 1 != i)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;
};

// Assignment 7
void checkLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
};