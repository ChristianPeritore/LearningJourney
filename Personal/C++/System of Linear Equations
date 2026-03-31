#include <iostream>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2;
    float determinant, x, y;
    cout << "Hello, enter the coefficients of the first equation (a1, b1, c1): " << endl;
    cin >> a1 >> b1 >> c1;
    cout << "Now enter those for the second equation (a2, b2, c2): " << endl;
    cin >> a2 >> b2 >> c2;
    determinant = a1 * b2 - a2 * b1;
    if (determinant == 0) {
        cout << "The system is dependent or inconsistent (no unique solution). End of program." << endl;
        return 1;
    }
    x = (c1 * b2 - c2 * b1) / determinant;
    y = (a1 * c2 - a2 * c1) / determinant;
    cout << "\nFirst equation: " << a1 << "x + " << b1 << "y = " << c1 << endl;
    cout << "Second equation: " << a2 << "x + " << b2 << "y = " << c2 << endl;
    cout << "The value of x is: " << x << " and the value of y is: " << y << endl;
    return 0;
}
