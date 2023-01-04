#include <iostream>
#include <string>

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
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a: " << a << "\tb: " << b << "\n";
    return 0;
}