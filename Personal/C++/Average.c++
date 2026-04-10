#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int choice;
    cout << "=== STATISTICS MENU ===" << endl;
    cout << "1. Average of N numbers (General)" << endl;
    cout << "2. Grade Analysis (Average, Max, Min with 1-10 validation)" << endl;
    cout << "3. Average and Variance of 3 specific numbers" << endl;
    cout << "Choose an option: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            float num, sum = 0;
            int n;
            cout << "How many numbers do you want to enter? ";
            cin >> n;
            while (n <= 1) {
                cout << "Error: please enter at least 2 numbers. Try again: ";
                cin >> n;
            }
            for (int i = 0; i < n; i++) {
                cout << "Enter number " << i + 1 << ": ";
                cin >> num;
                sum += num;
            }
            cout << "The average is: " << sum / n << endl;
            break;
        }
        case 2: {
            int n;
            double grade, sum = 0, max_grade = 0, min_grade = 11;
            cout << "How many grades do you want to enter? ";
            cin >> n;
            while (n <= 1) {
                cout << "Error: please enter at least 2 grades. Try again: ";
                cin >> n;
            }
            for (int i = 1; i <= n; i++) {
                cout << "Enter grade number " << i << ": ";
                cin >> grade;
                while (grade < 1 || grade > 10) {
                    cout << "Invalid grade (must be between 1 and 10). Try again: ";
                    cin >> grade;
                }
                if (grade > max_grade) max_grade = grade;
                if (grade < min_grade) min_grade = grade;
                sum += grade;
            }
            cout << "Average grade: " << sum / n << endl;
            cout << "Maximum grade: " << max_grade << "\nMinimum grade: " << min_grade << endl;
            break;
        }
        case 3: {
            double a, b, c, mean, variance;
            cout << "Enter 3 positive numbers for average and variance: " << endl;
            cin >> a >> b >> c;
            while (a <= 0 || b <= 0 || c <= 0) {
                if (a <= 0) { cout << "Enter the first positive term: "; cin >> a; }
                if (b <= 0) { cout << "Enter the second positive term: "; cin >> b; }
                if (c <= 0) { cout << "Enter the third positive term: "; cin >> c; }
            }
            mean = (a + b + c) / 3.0;
            variance = (pow(a - mean, 2) + pow(b - mean, 2) + pow(c - mean, 2)) / 3.0;
            cout << "Average: " << mean << endl;
            cout << "Variance: " << variance << endl;
            break;
        }
        default:
            cout << "Invalid choice. Exiting." << endl;
            break;
    }
    return 0;
}
