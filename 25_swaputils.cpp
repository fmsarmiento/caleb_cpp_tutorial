#include <iostream>
#include <string>
#include "25_swaputils.h"

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// fnx overloading

void swap(std::string a, std::string b)
{
    // string swap here. its okay
}