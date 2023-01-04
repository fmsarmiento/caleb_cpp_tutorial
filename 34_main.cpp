#include<iostream>
#include<string>
#include "34_user.h"
#include "34_teacher.h"

int main() 
{
    User user, user2;
    //std::cin >> user2;
    user.first_name = "Caleb";
    user.last_name = "Curry";
    user.set_status("Gold");
    std::cout << user << std::endl;
    std::cout << user2 << std::endl;
    output_status(user2);

    /*
    Teacher teacher;
    teacher.first_name = "Teach";
    teacher.last_name = "Cher";
    std::cout << teacher << std::endl;
    teacher.output();
    */

    Teacher teacher;
    User& u = teacher;
    u.output();
}