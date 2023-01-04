#include <string>
#include <iostream>

int main() {
    // for loop
    /* 
    int factorial = 5;
    for (int i = factorial -1; i > 0; i--) {
        factorial *= i;
    }
    std::cout << "Result is " << factorial << std::endl; */

    // while loop
    /* 
    int factorial = 5;
    int i = factorial-1;
    while (i > 1) {
        factorial *= i;
        i--;
    }
    std::cout << "Result is " << factorial << std::endl; */
    int i = 0;
    do {
        i += 1; // variables inside this do loop are only accessible inside the loop mismo (!)
        std :: cout << i;
    } while(i != 10);

    return 0; 
}

// break; continue; also used here;
// continue stops all code after it and just continues with the loop.