#include<iostream>
#include<vector>

void should_be_constant_data(const int data[]) {

}

void print_array(const int data[], int size)
{
    for(int i=0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    should_be_constant_data(data);
}

int main() 
{
    return 0;
}