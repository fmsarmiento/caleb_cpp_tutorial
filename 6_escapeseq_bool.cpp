#include <iostream>
#include <string>
#include <float.h>
using std::cout;

# define SOME_NUMBER 10 // const technique

int main() 
{
    //ESCAPE SEQ
    cout << "Helloo\bThere\tHi\nHellow\" ' "; // string is stored as: "Hello There\0", \0 tells u its the end of the string
    // \" creates a double quote. \ is an escape character. \'

    // BOOL
    bool pizza_is_good = true; // 0 is false, anything else is true, but outputs 1 if true. used as flags
    if(pizza_is_good) cout << "True!";

    // FLOAT
    float a = 10.0 / 3; // not entirely trustworthy
    a = a * 100000000000;
    double b = 7.7e4; // 77000
    long double c;
    // 7.7 * 10000 = 77000
    cout << std::fixed << a << std::endl; // outputs not in exponents
    cout << FLT_DIG << std::endl; // 6 decimal places lang yan sureball.
    cout << LDBL_DIG << std::endl; // 18
    // generally use double. use float for memory management only

    // CONSTANTS
    const int some_number = 5; // can't be changed. creates a read-only variable. 
    enum { y = 100 } // another type of constant
}