#include <iostream>
#include <vector>

#include "method/problem.h"

using namespace std;

int main()
{
    printString("\nAssignment Number Two: ");
    printString("----------------------");
    printString("Hello World");
    printString("----------------------");
    printString("Assignment Number Three: ");
    printString("----------------------");
    getMultiplicationTable(1, 12);
    printString("----------------------");
    printString("Assignment Number Four: ");
    printString("----------------------");
    checkIsPalindrome("CS673--376SC");
    checkIsPalindrome("2023/02/01");
    printString("----------------------");
    printString("Assignment Number Five: ");
    printString("----------------------");
    combineList({'a', 'b', 'c'}, {1, 2, 3});
    printString("----------------------");
    printString("Assignment Number Six: ");
    printString("----------------------");
    getFibonacciNumber(100);
    printString("----------------------");
    printString("Assignment Number Seven: ");
    printString("----------------------");
    checkLeapYear(2023);
    printString("----------------------");
    return 0;
};
