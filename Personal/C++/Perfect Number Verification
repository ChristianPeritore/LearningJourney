#include <iostream>
using namespace std;
int main() {
    int number;
    int divisor = 1, sum = 0;
    cout << "Enter a positive integer: " << endl;
    cin >> number;
    while (number <= 0) {
        cout << "Error: The number must be positive. Try again: " << endl;
        cin >> number;
    }
    while (divisor < number) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }
    if (number == sum) {
        cout << "The number " << number << " is a perfect number." << endl;
    } else {
        cout << "The number " << number << " is not a perfect number." << endl;
    }
    cout << "Sum of divisors: " << sum << endl;
    return 0;
}
