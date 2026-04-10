#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float final_velocity, distance, time_input, initial_vel_kmh, initial_vel_ms, acceleration, time, stopping_distance, deceleration, total_distance;
    string response;
    cout << "Enter initial velocity (in km/h), acceleration (m/s^2) and time (s):" << endl;
    cin >> initial_vel_kmh >> acceleration >> time;
    initial_vel_ms = initial_vel_kmh / 3.6;
    final_velocity = initial_vel_ms + (acceleration * time);
    distance = (initial_vel_ms * time) + (0.5 * acceleration * pow(time, 2));
    cout << "Do you also want to calculate the braking distance with deceleration? (yes/no)" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "Enter the deceleration value:" << endl;
        cin >> deceleration;
        stopping_distance = pow(final_velocity, 2) / (2 * deceleration);
        total_distance = distance + stopping_distance;
        cout << "Initial velocity: " << initial_vel_ms 
             << "\nAcceleration: " << acceleration 
             << "\nTime: " << time 
             << "\nFinal velocity: " << final_velocity 
             << "\nDistance traveled: " << distance 
             << "\nBraking distance: " << stopping_distance 
             << "\nTotal distance: " << total_distance << endl;
    } else {
        cout << "Initial velocity: " << initial_vel_ms 
             << "\nAcceleration: " << acceleration 
             << "\nTime: " << time 
             << "\nFinal velocity: " << final_velocity 
             << "\nDistance traveled: " << distance << endl;
    }
    return 0;
}
