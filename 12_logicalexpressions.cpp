#include<iostream>
#include<string>

int main() {
    std::string answer = "Francis";
    int age_answer = 63;
    int age_guess;
    std:: string guess;
    std::cout << "Guess my name!";
    std::cin >> guess;
    std::cout << "Guess my age!";
    std::cin >> age_guess;

    if(guess == answer && age_guess == age_answer) {
        std::cout<<"You got it bitch.";
    } else {
        std::cout<<"Bro wtf";
    }
    return 0;

    enum class Season{summer, spring, fall, winter};
    Season now = Season::winter;
    switch(now) {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            std::cout<<"Stay Warm!\n";
            break;
    }

}
// more operators: == != || && !(expression)  