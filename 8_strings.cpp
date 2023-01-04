#include <iostream>
#include <string>

using std::cout;

int main()
{
    std::string greeting = "Hello";
    cout << greeting + " there" << std::endl;
    std::string complete_greeting = greeting + " World";
    complete_greeting += "!";
    cout << complete_greeting;
    std::cout << complete_greeting.length() << std::endl;
    // method -> member function. part of the object. length is an example. method is somehow interchangeable with functions
    char name[] ="Caleb"; // c string == array of characters. Length of char is 6 -> C,a,l,e,b,\0 -> This is from C

    /*
    std::string greeting2;
    std::cin >> greeting2; // cin stops getting input default on white space.
    std::string leftover;
    std::cin >> leftover;
    std::cout << greeting2 << std::endl; // this will only get til before a space is there.
    std::cout << leftover << std::endl;
    */

    // solution to previous problem
    /* 
    std::string greeting3;
    getline(std::cin, greeting3);
    std::cout << greeting3 << std::endl;
    */

    // string methods
    std::string greeting4 = "Hi";
    greeting4 += " there!"; // appending. can be done with greeting.append(" there!");
    greeting4.insert(0,"SHAMALAMALA, "); // insert at index 0
    greeting4.erase(0, 5); // remove 5 characters at index 0. If no index, everything after index 0 will be removed.
    greeting4.erase(greeting4.length() - 1); // remove last char
    greeting4.replace(0,4,"Shippy"); // delete 0 to 4 and add Shippy

    int idx = greeting4.find("there"); // returns an index
    greeting4.replace(idx, 5, "thou"); // ShippyLA, Hi thou
    std::cout << greeting4.substr(5,2); // yL
    std::cout << greeting4.find_first_of("aeiou") << std::endl; // find first occurence of aeiou. if not found, will give a huge number.
    // the huge number given will be npos (not in position) == negative 1. magiging big number siya kasi unsigned. 
    if(greeting4 != "Hello") std::cout << "NotEquals"; // for comparison
    if(greeting4.compare("Hello") != 0) std::cout << "NotEquals"; // comparing. returns 0 if equal
    std::cout << std::endl << greeting4.size() << std::endl; // size and length the same
    std::cout << greeting4 << std::endl;
}