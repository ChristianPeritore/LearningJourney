#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "Welcome! Please enter the lengths of the 3 sides of a triangle: " << endl;
    cin >> a >> b >> c;
    while (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error: All sides must be greater than 0. Please re-enter all 3 sides: " << endl;
        cin >> a >> b >> c;
    }
    while (a >= (b + c) || b >= (a + c) || c >= (a + b)) {
        cout << "Error: These sides do not satisfy the Triangle Inequality (one side is too long)." << endl;
        cout << "Please enter 3 new sides: " << endl;
        cin >> a >> b >> c;
        if (a <= 0 || b <= 0 || c <= 0) {
            cout << "Invalid input (0 or negative). Restarting check..." << endl;
            continue; 
        }
    }
    cout << "The triangle is: ";
    if (a == b && b == c) {
        cout << "EQUILATERAL" << endl;
    } 
    else if (a != b && b != c && a != c) {
        cout << "SCALENE" << endl;
    } 
    else {
        cout << "ISOSCELES" << endl;
    }
    cout << "Thank you for using this program!" << endl;
    return 0;
}
