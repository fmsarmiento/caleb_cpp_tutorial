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
        friend void output_status(User user); // friend fnx has to be declared here.
        friend std::istream& operator >> (std::istream &input, User &user); // friend fnx has to be declared here.
    private:
        std::string status = "Ok";
        static int user_count; // creates a user count. static is a trait available to the class as a whole
};
int User::user_count = 0; // set static stuff here! You cant set it on the class mismo

//accessing a private data
void output_status(User user)
{
    std::cout << user.status << "\n";
}

// overloading cout for user. << is cout
std::ostream& operator << (std::ostream& output, User user)
{
    output << user.first_name << " " << user.last_name << ", " << user.get_status();
    return output;
}

// overloading cin for user. >> is cin
std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

int main() 
{
    User user, user2;
    std::cin >> user2;
    user.first_name = "Caleb";
    user.last_name = "Curry";
    user.set_status("Gold");
    std::cout << user << std::endl;
    std::cout << user2 << std::endl;
    output_status(user2);
}