#include <iostream>
#include <climits>

int main()
{
    short a; // 16 bits?
    int b; // 16 or 32 based on architecture
    long c; // atleast 32
    long long d; // atleast 64
    unsigned short e; // no negatives

    std::cout << sizeof(long long) << std::endl; // in bytes, so *8 for bits
    std::cout << SHRT_MAX << std::endl; // shows max val, can be SHRT_MIN, ULLONG_MAX, USHRT_MAX, etc.

    char f = 'A'; // 8 bits long. NEED to use single quotes, double for string.
    std::cout << (int) f << std::endl; // typecasting char f to int. ASCII Table
    char x = '55';
    std::cout << x << std::endl; // prints ASCII conversion of 55. Max is 127. If we put 128, maglalabas ng warning regarding overflow.
}