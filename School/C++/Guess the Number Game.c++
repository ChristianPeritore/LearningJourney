#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int targetNumber = rand() % 100 + 1;
    int guess;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > targetNumber) {
            cout << "Too high! Try a smaller number." << endl;
        } else if (guess < targetNumber) {
            cout << "Too low! Try a larger number." << endl;
        } else {
            cout << "Congratulations! You guessed it. The number was " << targetNumber << endl;
        }
    } while (guess != targetNumber);
    return 0;
}
