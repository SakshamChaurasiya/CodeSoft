#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string Name;
    char input;
    int Userinput;
    bool playAgain = true;
    int score = 0;

    cout << "Enter your Name " << endl;
    cin >> Name;
    cout << endl;
    while (playAgain)
    {
        srand(0);
        int variable = rand() % 100 + 1;
        int attempts = 0;
        int maxAttempts = 7;
        bool guessedCorrectly = false;
        cout << "Welcome to the number guessing game " << Name << endl;
        cout << "You have 7 attempts to guess the number correctly!" << endl;
        cout << "Guess the number between 1 and 100" << endl;

        while (attempts < maxAttempts)
        {
            int guess;
            cout << "Enter your guess number: " << endl;
            cin >> guess;
            attempts++;

            if (guess == variable)
            {
                cout << "Congrats! You guessed the current number in " << attempts << " attempts." << endl;
                score++;
                guessedCorrectly = true;
            }

            else if (guess < variable)
            {
                cout << "Too low! Try again" << endl;
            }
            else
            {
                cout << "Too high! Try again" << endl;
            }
        }
        if (!guessedCorrectly)
        {
            cout << "Out of attempts! The correct number was " << variable << endl;
        }
        cout << "Your current score is: " << score << endl;
        cout << "Do you want to play again? (Y/N) " << endl;
        bool playChoice;
        cin >> playChoice;
        cout << endl;

        if (playChoice == 'N')

        {
            playAgain = false;
            cout << "Thank you for playing the game." << Name << " Your final score is: " << score << endl;
        }
    }

    return 0;
}