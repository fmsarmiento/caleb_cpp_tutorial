#include<vector>
#include<string>
#include<iostream>
#include "34_user.h"


int User::get_user_count() 
{
    return user_count;
}
std::string User::get_status()
{
    return status;
}
User::User()
{
    std::cout << "User created.\n";
    user_count++;
}
User::User(std::string first_name, std::string last_name, std::string status)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->status = status;
    user_count++;
}
User::~User()
{
    std::cout << "Destructor here!\n";
    user_count--;
}
void User::output() 
{
    std::cout << "I am a user.\n";
}

void User::set_status(std::string status) {
    if(status == "Gold" || status == "Silver" || status == "Bronze")
    {
        this->status = status;
    }
    else
    {
        this->status = "Error";
    }
}
void output_status(User user); // friend fnx has to be declared here.
std::istream& operator >> (std::istream &input, User &user); // friend fnx has to be declared here.
std::ostream& operator << (std::ostream& output, User user);
std::string status = "Ok";
int user_count; // creates a user count. static is a trait available to the class as a whole

int User::user_count = 0; // set static stuff here! You cant set it on the class mismo

//accessing a private data
void output_status(User user)
{
    std::cout << user.status << "\n";
}

// overloading cout for user. << is cout
std::ostream& operator << (std::ostream& output, User user)
{
    output << user.first_name << " " << user.last_name << ", " << user.status;
    return output;
}

// overloading cin for user. >> is cin
std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}