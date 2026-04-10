#include <iostream>
using namespace std;
int main() {
    int choice = 1;
    double celsius, fahrenheit, kelvin;
    const double ABSOLUTE_ZERO_C = -273.15;
    while (choice >= 1 && choice <= 3) {
        cout << "\nHello, choose whether to convert from Celsius (1) or Kelvin (2) (enter 3 to exit): " << endl;
        cin >> choice;
        while (choice < 1 || choice > 3) {
            cout << "Invalid option, please try again: " << endl;
            cin >> choice;
        }
        if (choice == 3) {
            cout << "Program terminated." << endl;
            return 0;
        }
        switch (choice) {
            case 1:
                cout << "Enter the temperature in °C: " << endl;
                cin >> celsius;
                while (celsius < ABSOLUTE_ZERO_C) {
                    cout << "Physically impossible temperature (below absolute zero). Please try again: " << endl;
                    cin >> celsius;
                }
                kelvin = celsius + 273.15;
                fahrenheit = (celsius * 1.8) + 32;
                break;
            case 2:
                cout << "Enter the temperature in K: " << endl;
                cin >> kelvin;
                while (kelvin < 0) {
                    cout << "Physically impossible temperature (below absolute zero). Please try again: " << endl;
                    cin >> kelvin;
                }
                celsius = kelvin - 273.15;
                fahrenheit = (celsius * 1.8) + 32;
                break;
        }
        cout << "\nResults:" << endl;
        cout << "Celsius: " << celsius << " °C" << endl;
        cout << "Kelvin: " << kelvin << " K" << endl;
        cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
        if (celsius <= 0) {
            cout << "State of Water: Solid (Ice)" << endl;
        } else if (celsius > 0 && celsius < 100) {
            cout << "State of Water: Liquid" << endl;
        } else {
            cout << "State of Water: Gaseous (Steam)" << endl;
        }
    }
    return 0;
}
