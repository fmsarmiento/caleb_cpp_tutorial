#include <iostream>
// using namespace std; --> no need to write std now. BUT it's better to explicitly state so.
int main() // main function
{
    std::cout << "Hello World\n"; // std is a namespace -> grouping of code. std is the group (namespace), cout is the function. kinda like pandas.df()
    // cout is the object. Class describes structure of object. Class ng cout is ostream
    // << is an operator. cout and "hello world" are the operands.
    return 0;
}

// basically, "" is directed to cout, and cout prints it.
// compile: g++ tutorial1.cpp
// run: ./a.exe