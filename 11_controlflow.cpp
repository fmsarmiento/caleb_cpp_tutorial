#include<iostream>

int main() {
    int age;
    std :: cout << "Enter your age.";
    std :: cin >> age;
    switch(age) {
        case 17:
            std :: cout << "Ur underage bro.";
            break;
        default:
            std :: cout << "Ur ok.";
            break;
    }
    if (age < 13) {
        std :: cout << "You're not old enough.";
    } else if(age < 15) {
        std :: cout << "Bro ur so close";
    } else {
        std :: cout << "Youre old enough.";
    }
    return 0;
}