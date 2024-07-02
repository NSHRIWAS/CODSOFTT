#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main ()
{
    srand(time(0));   // Generating random numbers
    
    int random = rand() % 100;    // Numbers will be generated in between 0-100
    bool check = false;
    int guess = 0;
    
    // Loop will run until user guesses the correct number
    while(guess != random) {
        cout << "Enter number between 0-100:";
        cin >> guess;
        
        if (guess == random) {
            check = true;
        }
        else if(guess > random) {
            cout << "\nGuess is too high. Try again!!!\n";
        }
        else {
            cout << "\nGuess is too low. Try again!!!\n";
        }
    }
    
    if (check == true) {
        cout << "\nCongratulations!!!";
    }
    
    return 0;
    
}

