#include <iostream>
#include <cmath>
int main()
{
    std::cout << sqrt(-25) << std::endl; // nan ; a special number (not a number). can call as NAN
    std::cout << pow(9,999) << std::endl; // inf. can call as INFINITY / -INFINITY
    std::cout << remainder(5,2.2) << std::endl; // modulo. remainder can throw out a float, unlike %. same fnx: fmod
    std::cout << ceil(fmin(10,3.25)) << std::endl; // round up basta may decimal. can use trunc to chop off the number, or floor to round down. (floor of -1.5 is 2 btw)
}