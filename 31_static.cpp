#include<vector>
#include<string>
#include<iostream>

class User
{
    public:
        static int get_user_count() 
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User()
        {
            user_count++;
        }
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;
        }
        ~User()
        {
            std::cout << "Destructor here!\n";
            user_count--;
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
        static int user_count; // creates a user count. static is a trait available to the class as a whole
};
int User::user_count = 0; // set static stuff here! You cant set it on the class mismo

int main() 
{
    User user1,user2,user3;
    User user("Caleb","Curry", "Ass");
    user.set_status("Bass");
    std::cout << user.get_status() << std::endl;
    std::cout << User::get_user_count() << " Users" << std::endl;
    return 0;
}