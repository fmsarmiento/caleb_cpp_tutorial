#include<iostream>
#include<vector>

void print_vector(std::vector<int> data) // data here is COPIED, not pointed to. 
// So if you pop here, it won't affect the main function. You can use &data instead to get
// the pointer equivalent instead.
{
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
}

int main() 
{
    std::vector<int> data = {1,2,3};
    data.push_back(12); // add to last elt
    std::cout << data[data.size() - 1] << std::endl; // print last elt
    data.pop_back(); // remove last elt
    std::cout << data[data.size() - 1] << std::endl;
    print_vector(data);
    return 0;
}