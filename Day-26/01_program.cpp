// Write a program to Create number guessing game. 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;

    cout << "Number Guessing Game\n";
    cout << "Guess a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret)
            cout << "Too high!\n";
        else if (guess < secret)
            cout << "Too low!\n";
        else
            cout << "Congratulations! You guessed the correct number.\n";

    } while (guess != secret);

    return 0;
}