#include <iostream>

struct User
{
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    private:
    std::string status = "Ok";
};

int main()
{
    User me;
    me.first_name = "Francis";
    me.last_name = "Doe";

    std::cout << "Status: " << me.get_status();
    return 0;
}