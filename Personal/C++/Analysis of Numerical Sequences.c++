#include <iostream>
using namespace std;
int main() {
    int n, choice;
    int count = 0, sum = 0, max_val, min_val, even_count = 0, odd_count = 0;
    double average;
    cout << "Choose the mode:" << endl;
    cout << "1. Enter a fixed number of elements" << endl;
    cout << "2. Enter numbers until you type 0" << endl;
    cin >> choice;
    if (choice == 1) {
        int quantity;
        cout << "How many numbers do you want to enter? ";
        cin >> quantity;
        if (quantity <= 0) {
            cout << "Error: Invalid quantity." << endl;
            return 1;
        }
        for (int i = 0; i < quantity; i++) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> n;
            if (i == 0) {
                max_val = n;
                min_val = n;
            }
            sum += n;
            count++;
            if (n > max_val) max_val = n;
            if (n < min_val) min_val = n;
            if (n % 2 == 0) even_count++;
            else odd_count++;
        }
    } 
    else if (choice == 2) {
        cout << "Enter numbers (0 to finish):" << endl;
        cin >> n;
        if (n == 0) {
            cout << "No numbers entered!" << endl;
            return 1;
        }
        max_val = n;
        min_val = n;
        while (n != 0) {
            sum += n;
            count++;
            if (n > max_val) max_val = n;
            if (n < min_val) min_val = n;
            if (n % 2 == 0) even_count++;
            else odd_count++;
            cout << "Enter another number (0 to finish): ";
            cin >> n;
        }
    } 
    else {
        cout << "Invalid choice." << endl;
        return 1;
    }
    average = (double)sum / count;
    cout << "\n=== FINAL RESULTS ===" << endl;
    cout << "Total numbers processed: " << count << endl;
    cout << "Total sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum value: " << max_val << endl;
    cout << "Minimum value: " << min_val << endl;
    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;
    return 0;
}
