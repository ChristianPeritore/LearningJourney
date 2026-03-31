#include <iostream>
using namespace std;
int main() {
    int n, maxVal, minVal;
    int count = 0, evenCount = 0, oddCount = 0, sum = 0;
    cout << "Enter a number (0 to finish): " << endl;
    cin >> n;
    if (n == 0) {
        cout << "Program ended immediately." << endl;
        return 0; 
    }
    maxVal = n;
    minVal = n;
    while (n != 0) {
        count++;
        sum += n;
        if (n < 0) {
            cout << "Note: You entered a negative number." << endl;
        }
        if (n > maxVal) maxVal = n;
        if (n < minVal) minVal = n;
        if (n % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        cout << "Enter another number (0 to finish): " << endl;
        cin >> n;
    }
    cout << "\n--- FINAL STATISTICS ---" << endl;
    if (sum > 100) {
        cout << "The sum (" << sum << ") is greater than 100." << endl;
    } else if (sum < 100) {
        cout << "The sum (" << sum << ") is less than 100." << endl;
    } else {
        cout << "The sum is exactly 100." << endl;
    }
    cout << "Total numbers entered: " << count << endl;
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    return 0;
}
