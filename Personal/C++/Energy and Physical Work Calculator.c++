#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float kinetic_energy, potential_energy, height, work, power;
    float force, displacement, angle, time;
    float mass, velocity;
    int choice;
    const float g = 9.81;
    const float PI = 3.14159265;
    cout << "Welcome. Please enter a number associated with a physics operation:" << endl;
    cout << "1. Kinetic Energy" << endl;
    cout << "2. Gravitational Potential Energy" << endl;
    cout << "3. Work" << endl;
    cout << "4. Power" << endl;
    cout << "Enter any other number to exit." << endl;
    cin >> choice;
    while (choice >= 1 && choice <= 4) {
        switch (choice) {
            case 1:
                cout << "\n--- Kinetic Energy ---" << endl;
                cout << "Enter mass (kg) and velocity (m/s): ";
                cin >> mass >> velocity;
                if (mass <= 0 || velocity < 0) {
                    cout << "Error: Invalid inputs." << endl;
                } else {
                    kinetic_energy = 0.5 * mass * pow(velocity, 2);
                    if (kinetic_energy > 1000) cout << "WARNING: High Energy!" << endl;
                    cout << "With mass " << mass << " kg and velocity " << velocity << " m/s, Kinetic Energy is " << kinetic_energy << " J" << endl;
                }
                break;
            case 2:
                cout << "\n--- Gravitational Potential Energy ---" << endl;
                cout << "Enter mass (kg) and height (m): ";
                cin >> mass >> height;
                if (mass <= 0 || height < 0) {
                    cout << "Error: Invalid inputs." << endl;
                } else {
                    potential_energy = mass * g * height;
                    cout << "With mass " << mass << " kg and height " << height << " m, Potential Energy is " << potential_energy << " J" << endl;
                }
                break;
            case 3:
                cout << "\n--- Work ---" << endl;
                cout << "Enter force (N), displacement (m), and the angle (degrees): ";
                cin >> force >> displacement >> angle;
                
                if (angle == 90) {
                    cout << "Work is zero (force is perpendicular to displacement)." << endl;
                    work = 0;
                } else {
                    float radians = angle * (PI / 180.0);
                    work = force * displacement * cos(radians);
                }
                cout << "With force " << force << " N, displacement " << displacement << " m, and angle " << angle << "°, Work is " << work << " J" << endl;
                break;
            case 4:
                cout << "\n--- Power ---" << endl;
                cout << "Enter work (J) and time (s): ";
                cin >> work >> time;
                if (time <= 0) {
                    cout << "Error: Time must be greater than zero." << endl;
                } else {
                    power = work / time;
                    if (power > 1000) cout << "High Power output!" << endl;
                    cout << "With work " << work << " J and time " << time << " s, Power is " << power << " W" << endl;
                }
                break;
        }
        cout << "\nEnter another option (1-4) or any other key to exit: ";
        cin >> choice;
    }
    cout << "Program exited." << endl;
    return 0;
}
