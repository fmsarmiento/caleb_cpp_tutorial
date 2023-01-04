#include<string>
#include<vector>
#include<iostream>
#include<fstream>

int main() {
    std::ifstream file("tacos.txt");
    // get all lines on the file
    /*
    std::vector<std::string> names;
    std::string input; 
    // if we change the input type to char, it will get input by letters.
    // if num, it will get input until it encounters a non-numeric char.
    while(file >> input)
    {
        names.push_back(input);
    }
    for(std::string name : names)
    {
        std::cout << name << std::endl;
    } */
    // get a single line
    std::string line;
    getline(file,line);
    std::cout << line << "\n";
    return 0;
}