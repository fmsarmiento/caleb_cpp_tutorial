#include<iostream>

double pow(double base, int pow = 2) // default for pow is 2.
// if pow is not given, we use 2
{
    int total = 1;
    for(int i = 0; i < pow; i++) {
        total *= base;
    }
    return total;
}

int main()
{
    std::cout << pow(3) << std::endl;
    return 0;
}