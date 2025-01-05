#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() 
{
    srand((unsigned int)time(0));

    int randN = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing\n";
    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    while (userGuess != randN) 
    {
    
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randN) 
        {
            cout << "Your guess is too high! Try again.\n";
        } else if (userGuess < randN)
        {
            cout << "Your guess is too low! Try again.\n";
        } else 
        {
            cout << "Congratulations! You guessed the correct number: " << randN << "\n";
        }
    }

    return 0;
}
