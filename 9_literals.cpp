#include <iostream>
#include <string>
// literals are constants. different for diff bases(octal, hex, bin)
int main()
{
 // quoted constants: 'c' "c" 
 // integers: 5
 // 5U -> unsigned integer. 
    auto x = 5U; // auto is a c++ 11 feature. 5ULL i unsigned long long. 5.0F is a float. 5.0 is a double, 5.0F is a long double
    std::cout << x << std::endl;
    int number = 0x30; // hex; 16(0) * 3(3) = 48
    std::cout << number << std::endl;
    int number2 = 030; // octal; 8(0) * 3(3) = 24
    std::cout << number2 << std::endl;
    int number3 = 30;
    std::cout << std::hex << number3 << std::endl; // show in hex, pwede din std::oct
}