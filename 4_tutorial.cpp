#include <iostream>
#include <cmath>

// double power(double, int); // declaration. You do this if you want the functions to go before calling them.

double power(double base, int exponent) 
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base,exponent);
    std::cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}

int main() 
{
    double base, exponent;
    std::cout << "Base: ";
    std::cin >> base;
    std::cout << "\nExponent: ";
    std:: cin >> exponent;
    print_pow(base, exponent);
}