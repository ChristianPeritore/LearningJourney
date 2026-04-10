#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float radius, angle_deg, angle_rad;
    float x, y;
    int choice;
    string response;
    cout << "Choose conversion: Cartesian to Polar (1) or Polar to Cartesian (2)" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter coordinates x and y:" << endl;
            cin >> x >> y;
            radius = sqrt(pow(x, 2) + pow(y, 2));
            angle_rad = atan2(y, x);
            cout << "The angle is in radians. Do you want to convert it to degrees? (yes/no)" << endl;
            cin >> response;
            if (response == "yes") {
                angle_deg = (angle_rad * 180) / 3.14159;
                cout << "Polar Coordinates: [" << radius << "; " << angle_deg << "°]" << endl;
            } else {
                cout << "Polar Coordinates: [" << radius << "; " << angle_rad << " rad]" << endl;
            }
            break;
        case 2:
            cout << "Enter radius (r) and angle alpha (a) in degrees:" << endl;
            cin >> radius >> angle_deg;
            angle_rad = (angle_deg * 3.14159) / 180.0;  
            x = radius * cos(angle_rad);
            y = radius * sin(angle_rad);
            cout << "Cartesian Coordinates: (" << x << "; " << y << ")" << endl;
            break;
        default:
            cout << "Error: Invalid selection" << endl;
            return 1;
    }
    return 0;
}
