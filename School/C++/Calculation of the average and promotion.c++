#include <iostream>
using namespace std;
int main() {
    int grade1, grade2, grade3;
    float average;
    cout << "Enter first grade: " << endl;
    cin >> grade1;
    cout << "Enter second grade: " << endl;
    cin >> grade2;
    cout << "Enter third grade: " << endl;
    cin >> grade3;
    if (grade1 >= 6 && grade2 >= 6 && grade3 >= 6) {
        average = (grade1 + grade2 + grade3) / 3.0;
            if (average > 7.5) {
            cout << "Excellent work!" << endl;
        } else {
            cout << "You passed!" << endl;
        }
    } 
    else {
            if ((grade1 < 6 && grade2 < 6) || (grade2 < 6 && grade3 < 6) || (grade1 < 6 && grade3 < 6)) {
            cout << "Student failed (too many insufficient grades)." << endl;
        } else {
            cout << "Student deferred (needs to retake one subject)." << endl;
        }
    }
    return 0;
}
