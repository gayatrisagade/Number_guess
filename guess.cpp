/*
Task: Guessing Game

Description:
Implement a number guessing game.
Generate a random number and prompt
the user to guess the number. Provide
hints such as "higher" or "lower" to help
the user narrow down the guess.
Continue until the user guesses the
correct number.
*/

//Program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    // User's guess and number of attempts
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    do {
        // Prompt the user to enter a guess
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct, higher, or lower
        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else {
            cout << "Too high! Try a lower number." << endl;
        }

    } while (userGuess != secretNumber);

}


/*
Output:

Welcome to the Number Guessing Game!
Try to guess the number between 1 and 100.
Enter your guess: 45
Too low! Try a higher number.
Enter your guess: 56
Too low! Try a higher number.
Enter your guess: 85
Too high! Try a lower number.
Enter your guess: 70
Too low! Try a higher number.
Enter your guess: 65
Too low! Try a higher number.
Enter your guess: 82
Too high! Try a lower number.
Enter your guess: 80
Too high! Try a lower number.
Enter your guess: 76
Too low! Try a higher number.
Enter your guess: 78
Too low! Try a higher number.
Enter your guess: 79
Congratulations! You guessed the correct number in 10 attempts.
*/