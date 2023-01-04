#ifndef USER_H
#define USER_H
#include<string>

class User
{
    public:
        static int get_user_count();
        std::string first_name;
        std::string last_name;
        std::string get_status();
        User();
        User(std::string first_name, std::string last_name, std::string status);
        ~User();
        virtual void output(); //overriding
        void set_status(std::string status);
        friend void output_status(User user); // friend fnx has to be declared here.
        friend std::istream& operator >> (std::istream &input, User &user); // friend fnx has to be declared here.
        friend std::ostream& operator << (std::ostream& output, User user);
    private:
        std::string status = "Ok";
        static int user_count; // creates a user count. static is a trait available to the class as a whole
};

#endif