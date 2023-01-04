#include <iostream>
#include <vector>

int main() 
{
    int data[] = {1,2,3,4,5,6};
    for(int n: data) // scrolls through collections. for each
    {
        std::cout << n << "\t";
    }
    return 0;
}