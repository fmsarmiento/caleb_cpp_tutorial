#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>

void print_array(int array[], int count) {
    for(int i=0;i<count;i++) {
        std::cout << array[i] << "\t";
    }
}

void play_game() {
    int guesses[251];
    int guess_count = 0;
    int random = rand() % 251; // get a random num bet 0 and 10
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin>>guess;
        guesses[guess_count] = guess; //guesses[guess_count++] = guess works the same way as line 14-15
        guess_count++;
        if(guess == random) {
            std::cout << "You win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Too high\n";
        }
    }
    print_array(guesses, guess_count);
}

int main() {
    int choice;
    srand(time(NULL)); //seed a random number (Learn more about this)
    do {
        std::cout << "\n0. Quit\n1. Play Game\n";
        std::cin >> choice;

        switch(choice) {
            case 0:
                std::cout << "Quitting.\n";
                return 0;
            case 1:
                play_game();
                break;
            default:
                std::cout << "Try again. Just 0 or 1.\n";
                break;
        }
    } while(choice != 0);

    
    return 0;
}