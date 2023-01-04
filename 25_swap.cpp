#include <iostream>
#include <string>
#include "25_swaputils.h" // add header file to main

int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a: " << a << "\tb: " << b << "\n";
    return 0;
}