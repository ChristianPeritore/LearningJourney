#include <iostream>
using namespace std;
int main() {
    float grade1, grade2, grade3;
    float average, maximum, minimum;
    cout << "Enter the first grade: " << endl;
    cin >> grade1;
    cout << "Enter the second grade: " << endl;
    cin >> grade2;
    cout << "Enter the third grade: " << endl;
    cin >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    if (grade1 > grade2) {
        if (grade1 > grade3) {
            maximum = grade1;
        } else {
            maximum = grade3;
        }
    } else {
        if (grade2 > grade3) {
            maximum = grade2;
        } else {
            maximum = grade3;
        }
    }
    if (grade1 < grade2) {
        if (grade1 < grade3) {
            minimum = grade1;
        } else {
            minimum = grade3;
        }
    } else {
        if (grade2 < grade3) {
            minimum = grade2;
        } else {
            minimum = grade3;
        }
    }
    cout << "\n--- Grade Report ---" << endl;
    cout << "Average Score: " << average << endl;
    cout << "Lowest Grade:  " << minimum << endl;
    cout << "Highest Grade: " << maximum << endl;
    return 0;
}
