#include<array>
#include<iostream>
//templatized arrays are like vectors but has a fixed size.
// you can also pass by value, or pass by reference (&)
void print_array(std::array<int, 20> data)
{
    for(int i=0; i<data.size(); i++)
    {
        std::cout<<data[i]<<"\t";
    }
    std::cout<<"\n";
}

int main()
{
    std::array<int,20> data = {1,2,3};
    print_array(data);
    return 0;
}