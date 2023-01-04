// PROJECT_1 REFACTORED TO VECTORS
// ADDED HIGH SCORE SYSTEM
#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>

void print_vector(std::vector<int> vector)
{
    for(int i=0;i<vector.size();i++)
    {
        std::cout << vector[i] << "\t";
    }
}

void save_score(int size) 
{
    std::ifstream input("best_score.txt");
    int best_score;
    input >> best_score;
    if(!input.is_open()) 
    {
        std::cout << "Unable to read file.";
        return;
    }
    std::ofstream output("best_score.txt");
    if(!output.is_open()) 
    {
        std::cout << "Unable to read file.";
        return;
    }
    if(size < best_score) 
    {
        output << size;
    }
    else
    {
        output << best_score;
    }
}

void play_game() {
    std::vector<int> guesses;
    int random = rand() % 251; // get a random num bet 0 and 10
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin>>guess;
        guesses.push_back(guess);
        if(guess == random) {
            std::cout << "You win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Too high\n";
        }
    }
    print_vector(guesses);
    save_score(guesses.size());
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