#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int choice;
    float a1, d, r, sum, term;
    int n, number;
    cout << fixed << setprecision(2);
    do {
        cout << "\n=== PROGRESSIONS AND SERIES CALCULATOR ===" << endl;
        cout << "1. Arithmetic Progression" << endl;
        cout << "2. Geometric Progression" << endl;
        cout << "3. Sum of the first N natural numbers" << endl;
        cout << "4. Sum of the first N even numbers" << endl;
        cout << "5. Sum of the first N odd numbers" << endl;
        cout << "6. Multiplication Table" << endl;
        cout << "7. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\n--- ARITHMETIC PROGRESSION ---" << endl;
                cout << "Enter the first term: ";
                cin >> a1;
                cout << "Enter the common difference: ";
                cin >> d;
                cout << "How many terms do you want to display? ";
                cin >> n;
                if (n <= 0) {
                    cout << "Error: the number of terms must be positive!" << endl;
                    continue;
                }
                cout << "\nProgression: ";
                for (int i = 0; i < n; i++) {
                    term = a1 + i * d;
                    cout << term;
                    if (i < n - 1) cout << ", ";
                }
                cout << endl;
                break;
            case 2:
                cout << "\n--- GEOMETRIC PROGRESSION ---" << endl;
                cout << "Enter the first term: ";
                cin >> a1;
                cout << "Enter the common ratio: ";
                cin >> r;
                cout << "How many terms do you want to display? ";
                cin >> n;
                if (n <= 0) {
                    cout << "Error: the number of terms must be positive!" << endl;
                    continue;
                }
                cout << "\nProgression: ";
                for (int i = 0; i < n; i++) {
                    term = a1 * pow(r, i);
                    cout << term;
                    if (i < n - 1) cout << ", ";
                }
                cout << endl;
                break;
            case 3:
                cout << "\n--- SUM OF NATURAL NUMBERS ---" << endl;
                cout << "Enter N: ";
                cin >> n;
                if (n <= 0) {
                    cout << "Error: N must be positive!" << endl;
                    continue;
                }
                sum = n * (n + 1) / 2.0;
                cout << "Sum of 1+2+3+...+" << n << " = " << sum << endl;
                cout << "Numbers: ";
                for (int i = 1; i <= n; i++) {
                    cout << i;
                    if (i < n) cout << "+";
                }
                cout << " = " << sum << endl;
                break;
            case 4:
                cout << "\n--- SUM OF EVEN NUMBERS ---" << endl;
                cout << "Enter N (how many even numbers): ";
                cin >> n;
                if (n <= 0) {
                    cout << "Error: N must be positive!" << endl;
                    continue;
                }
                sum = 0;
                cout << "Even numbers: ";
                for (int i = 2; i <= 2 * n; i += 2) {
                    sum += i;
                    cout << i;
                    if (i < 2 * n) cout << "+";
                }
                cout << " = " << sum << endl;
                break;
            case 5:
                cout << "\n--- SUM OF ODD NUMBERS ---" << endl;
                cout << "Enter N (how many odd numbers): ";
                cin >> n;
                if (n <= 0) {
                    cout << "Error: N must be positive!" << endl;
                    continue;
                }
                sum = 0;
                cout << "Odd numbers: ";
                for (int i = 1; i <= 2 * n - 1; i += 2) {
                    sum += i;
                    cout << i;
                    if (i < 2 * n - 1) cout << "+";
                }
                cout << " = " << sum << endl;
                break;
            case 6:
                cout << "\n--- MULTIPLICATION TABLE ---" << endl;
                cout << "Enter the number: ";
                cin >> number;
                cout << "\nMultiplication table for " << number << ":" << endl;
                for (int i = 1; i <= 10; i++) {
                    cout << number << " x " << i << " = " << number * i << endl;
                }
                break;
            case 7:
                cout << "\nGoodbye!" << endl;
                break;
            default:
                cout << "Error: invalid choice!" << endl;
                break;
        }
    } while (choice != 7);
    return 0;
}
