#include <iostream>

int main() // main function
{
    int slices;
    std::cout << "Number of pizza slices:";
    std::cin >> slices; // greater than arrow since cin GETS (G) data from slices
    std::cout << "\nYou have " << slices << " slices of pizza left!" << std::endl;
    return 0;
}