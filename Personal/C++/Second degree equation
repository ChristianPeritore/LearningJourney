#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, delta, x1, x2;
    cout << "Enter the coefficients a, b and c:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0) {
        cout << "Error: This is not a quadratic equation (a=0)." << endl;
    } else {
        delta = pow(b, 2) - (4 * a * c);
        if (delta > 0) {
            cout << "There are two real and distinct roots." << endl;
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "x1 is " << x1 << " and x2 is " << x2 << endl;
        } else if (delta == 0) {
            cout << "There is a double real root." << endl;
            x1 = -b / (2 * a);
            cout << "x1 and x2 are " << x1 << endl;
        } else {
            cout << "There are two complex conjugate roots (not computable as float)." << endl;
        }
    }
    return 0;
}
