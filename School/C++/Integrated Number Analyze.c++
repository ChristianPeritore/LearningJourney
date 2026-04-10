#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: " << endl;
    cin >> number;
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
