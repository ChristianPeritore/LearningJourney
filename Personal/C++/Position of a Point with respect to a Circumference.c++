#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y, radius, distance;
    cout << "Hello! Please enter the radius of the circle: " << endl;
    cin >> radius;
    while (radius <= 0) {
        cout << "Error: The radius must be greater than 0. Please try again: " << endl;
        cin >> radius;
    }
    cout << "Great. Now enter the X and Y coordinates of a point P: " << endl;
    cin >> x >> y;
    distance = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Distance from the center: " << distance << endl;
    if (distance < radius) {
        cout << "The point is INSIDE the circle." << endl;
    } else if (distance > radius) {
        cout << "The point is OUTSIDE the circle." << endl;
    } else {
        cout << "The point is ON the circumference of the circle." << endl;
    }
    return 0;
}
