#include<vector>
#include<string>
#include<iostream>

class User
{
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User()
        {
            std::cout << "Destructor here!\n";
        }
        void set_status(std::string status) {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "Error";
            }
        }
    private:
        std::string status = "Ok";
};


int main() 
{
    User user("Caleb","Curry", "Ass");
    user.set_status("Bass");
    std::cout << user.get_status() << std::endl;
    return 0;
}