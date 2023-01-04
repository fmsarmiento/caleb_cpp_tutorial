#include<iostream>
#include<fstream>
#include<string>
#include<vector>
int main()
{
    std:: string filename;
    std::cin >> filename;
    // long variation
    //std::ofstream file;
    //file.open("hello.txt");
    std::ofstream file(filename); // overwrite, create new file
    //std::ofstream file("hello.txt", std::ios::app); // appends instead of overwriting
    file << "Hey!\n";
    if(file.is_open()) 
    {
        std::cout << "Opened successfully.";
    }
    std::vector<std::string> names;
    names.push_back("Francis");
    names.push_back("Kelly");
    names.push_back("Pixel");

    for(std::string name : names)
    {
        file << name << "\n";
    }
    
    file.close();
    return 0;
}