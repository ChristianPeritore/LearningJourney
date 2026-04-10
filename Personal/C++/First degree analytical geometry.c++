#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float d, xm, ym, a1, b1, c1, m, n, a2, b2, c2, x, y;
    int x1, y1, x2, y2, xp, yp;
    int choice = -1;
    cout << "Hello! Today we are working with first-degree analytical geometry." << endl;
    cout << "Choose a number from 1 to 5 based on what you want to do (enter 0 to exit the program):" << endl;
    while (choice != 0) {
        cout << "\nSelection: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Option 1: Calculate the distance between two points." << endl;
                cout << "Enter the x and y coordinates of the first point: ";
                cin >> x1 >> y1;
                cout << "Now the second point: ";
                cin >> x2 >> y2;
                d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
                cout << "First point: (" << x1 << "; " << y1 << ")" << endl;
                cout << "Second point: (" << x2 << "; " << y2 << ")" << endl;
                cout << "Distance: " << d << endl;
                break;
            case 2:
                cout << "Option 2: Calculate the midpoint between two points." << endl;
                cout << "Enter x and y for the first point: ";
                cin >> x1 >> y1;
                cout << "And for the second point: ";
                cin >> x2 >> y2;
                xm = (x1 + x2) / 2.0;
                ym = (y1 + y2) / 2.0;
                cout << "Midpoint: (" << xm << "; " << ym << ")" << endl;
                break;
            case 3:
                cout << "Option 3: Calculate m (slope) and n (y-intercept)." << endl;
                cout << "Enter a, b, and c of the line (general form ax + by + c = 0): ";
                cin >> a1 >> b1 >> c1;
                if (b1 == 0) {
                    cout << "Error: b is equal to 0, the line is vertical." << endl;
                } else {
                    m = (-a1) / b1;
                    n = (-c1) / b1;
                    cout << "The line " << a1 << "x + " << b1 << "y + " << c1 << " = 0 has:" << endl;
                    cout << "Slope (m): " << m << "\nY-intercept (n): " << n << endl;
                }
                break;
            case 4:
                cout << "Option 4: Find the line passing through two points (calculating m and n)." << endl;
                cout << "Enter x and y for the first point: ";
                cin >> x1 >> y1;
                cout << "And for the second point: ";
                cin >> x2 >> y2;
                if (x1 == x2) {
                    cout << "Error: The x values are equal, the line is vertical." << endl;
                } else {
                    m = (float)(y2 - y1) / (x2 - x1);
                    n = y1 - m * x1;
                    cout << "First point: (" << x1 << "; " << y1 << ")" << endl;
                    cout << "Second point: (" << x2 << "; " << y2 << ")" << endl;
                    cout << "Slope (m): " << m << ", Y-intercept (n): " << n << endl;
                }
                break;
            case 5:
                cout << "Option 5: Calculate the distance between a point and a line." << endl;
                cout << "Enter x and y of the point: ";
                cin >> xp >> yp;
                cout << "Enter a, b, and c of the line: ";
                cin >> a1 >> b1 >> c1;
                d = abs((a1 * xp) + (b1 * yp) + c1) / sqrt(pow(a1, 2) + pow(b1, 2));
                cout << "Distance: " << d << endl;
                break;
            case 0:
                cout << "Program finished." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}
