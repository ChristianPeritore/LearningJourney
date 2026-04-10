#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double G = 6.674e-11;
    double force, m1, m2, distance;
    cout << "Hello! Please enter the mass (in kg) of the first and second body: " << endl;
    cin >> m1 >> m2;
    while (m1 <= 0 || m2 <= 0) {
        if (m1 <= 0 && m2 <= 0) {
            cout << "Error: Both masses are invalid. Please re-enter both: " << endl;
            cin >> m1 >> m2;
        } else if (m1 <= 0) {
            cout << "Error: The first mass is invalid. Please try again: " << endl;
            cin >> m1;
        } else if (m2 <= 0) {
            cout << "Error: The second mass is invalid. Please try again: " << endl;
            cin >> m2;
        }
    }
    cout << "Now enter the distance between them (in meters): " << endl;
    cin >> distance;
    while (distance <= 0) {
        cout << "Error: Distance must be greater than zero. Please try again: " << endl;
        cin >> distance;
    }
    force = G * ((m1 * m2) / (pow(distance, 2)));
    cout << "\nThe Gravitational Force is: " << force << " N" << endl;
    return 0;
}
