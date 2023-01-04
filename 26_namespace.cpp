#include <iostream>
#include <string>

namespace utils {
    int print_stuff(std::string a)
    {
        std::cout << a;
    }
}

int main() {
    utils::print_stuff("Hello bro.");
    return 0;
}