#include <iostream>
using namespace std;
int main() {
    double grades[3];
    double sum = 0, average = 0;
    cout << "Hello! Please enter 3 grades (from 1 to 10):" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
        while (grades[i] < 1 || grades[i] > 10) {
            cout << "Invalid number. Please enter a grade between 1 and 10: ";
            cin >> grades[i];
        }
        sum += grades[i];
    }
    cout << "\nEntered grades:" << endl;
    for (int j = 0; j < 3; j++) {
        cout << grades[j] << " ";
    }
    average = sum / 3;
    cout << "\n\nThe average is: " << average << endl;
    if (average >= 6) {
        cout << "Status: Passing grade. Keep up the good work!" << endl;
    } else {
        cout << "Status: Failing grade. You need to study more!" << endl;
    }
    return 0;
}
