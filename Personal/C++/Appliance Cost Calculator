#include <iostream>
using namespace std;
int main () {
    int choice;
    float power, hours, energy_wh, energy_kwh, total_cost;
    string appliance_name;
    float cost_per_kwh = 0.25;
    cout << "Enter the number corresponding to an appliance:" << endl;
    cout << "1 Washing Machine (1500W)\n2 Refrigerator (150W)\n3 TV (100W)\n4 Oven (3000W)\n5 Air Conditioner (1500W)\n6 Enter name and power manually" << endl;
    cin >> choice;
    cout << "How many hours is it turned on?" << endl;
    cin >> hours;
    switch (choice) {
        case 1:
            energy_wh = 1500 * hours;
            break;
        case 2:
            energy_wh = 150 * hours;
            break;
        case 3:
            energy_wh = 100 * hours;
            break;
        case 4:
            energy_wh = 3000 * hours;
            break;
        case 5:
            energy_wh = 1500 * hours;
            break;
        case 6:
            cout << "Enter the appliance name and its power value (in Watts):" << endl;
            cin >> appliance_name;
            cin >> power;
            energy_wh = power * hours;
            break;
        default:
            cout << "Error: Invalid selection" << endl;
            return 1;
    }
    energy_kwh = energy_wh / 1000;
    total_cost = energy_kwh * cost_per_kwh;
    cout << "You consumed " << energy_kwh << " kWh, which costs " << total_cost << " $" << endl;
    return 0;
}
