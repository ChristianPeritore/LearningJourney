#include <iostream>
using namespace std;
/* THE COLLATZ CONJECTURE (3n + 1 Problem):
 This mathematical conjecture states that if you start with any positive integer:
 1. If the number is EVEN, divide it by 2.
 2. If the number is ODD, multiply it by 3 and add 1.
 The conjecture suggests that no matter what number you start with, 
 you will always eventually reach the number 1. */
int main() {
    int count = 0, peak_value = 0;
    int n;
    cout << "Hello! Please enter a positive integer greater than 1: " << endl;
    cin >> n;
    while (n <= 1) {
        cout << "Error: The number must be greater than 1. Please try again: " << endl;
        cin >> n;
    }
    peak_value = n;
    cout << "Starting sequence..." << endl;
    while (n > 1) {
        if (n % 2 == 0) {
            // If even, divide by 2
            n /= 2;
        } else {
            // If odd, 3n + 1
            n = (3 * n) + 1;
        }
        if (n > peak_value) {
            peak_value = n;
        }
        cout << n << " " << endl;
        count++;
    }
    cout << "\n--- RESULTS ---" << endl;
    cout << "Sequence Length (steps): " << count << endl;
    cout << "Highest Number Reached (Peak): " << peak_value << endl;
    return 0;
}
