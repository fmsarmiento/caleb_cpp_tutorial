#include<iostream>
#include<limits>

void print_array(int array[], int size) {
    //std::cout << sizeof(array) << std::endl; //returns 8, which is the size of a POINTER.
    std::cout <<size<<std::endl;
    for(int i=0; i < size; i++) {
        std::cout << array[i] << "\t";
    }
}

int main() 
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count=0;
    for(int i = 0; i < SIZE; i++) {
        if(std::cin >> guesses[i]) { // if cin is valid (is an integer, continue lang (return true))
            count++;
        } else {
            // invalid character; a letter perhaps.
            break;
        }
    }

    print_array(guesses, count);
    std::cin.clear(); // end the junk at the end of cin (like flush)
    // we need to clear for other std::cin afterwards. If hindi cleared, it will accept the junk on further inputs
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // stack overflow shit

    return 0;
}