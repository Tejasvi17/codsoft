#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low! Try again: ";
        } else if (guess > randomNumber) {
            cout << "Too high! Try again: ";
        }
    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;

    return 0;
}
