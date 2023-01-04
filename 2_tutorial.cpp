#include <iostream>
using namespace std; // using directive 
using std::cout; // alternative for directive
int main() // main function
{
    int slices = 5; // datatype, identifier, assignment operator, value, semicolon
    cout << slices;
    cout << "Hi Francis, " << "Hello World!\n" << std::endl; // endl = endline
    printf("%i\n",slices); // c commands also work here
    return 0;
}

// basically, "" is directed to cout, and cout prints it.