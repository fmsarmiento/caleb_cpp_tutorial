#include<iostream>
#include<string>
#include<vector>

class User 
{
    std::string status = "Ok";

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User() // happens every time we instantiate a class
        {
            std::cout <<"Constructor!\n";
        }
};

int main()
{
    User me;
    User one,two,three;
    me.first_name = "John";
    me.last_name = "Doe";
    std::vector<User> users;
    users.push_back(me);

    std::cout << "Status: " << users[0].get_status();
    return 0;
}