#include <iostream>
using namespace std;
int main() {
    int n;
    int sumEven = 0, sumOdd = 0;
    cout << "Enter a number to calculate the separate sums of even and odd numbers down to 1:" << endl;
    cin >> n;
    while (n < 2) {
        cout << "Value must be at least 2. Please try again: " << endl;
        cin >> n;
    }
    for (int i = n; i >= 1; i--) { 
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}
