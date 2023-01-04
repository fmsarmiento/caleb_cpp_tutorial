#include<iostream>
#include<string>
int main() {
    int answer = 5;
    std::cout << "Guess a number between 1 to 10.";
    int guess;
    std::cin >> guess;
    //int points = guess == answer ? 10 : 0; // guess equal to answer? If yes, 10. If no, 0.
    guess == answer ? std::cout << "Good Job" : std::cout << "Bad Job"; // cant assign here
    return 0;
}