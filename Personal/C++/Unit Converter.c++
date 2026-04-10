#include <iostream>
using namespace std;
int main() {
    float meters, centimeters, kilometers, miles, feet;
    float kg, grams, pounds, celsius, fahrenheit, kelvin;
    float kmh, ms, mph;
    char choice;
    int sub_choice;
    do {
        cout << "\n--- UNIT CONVERTER ---" << endl;
        cout << "Choose a category: (l)ength, (w)eight, (t)emperature, (v)elocity or (e)xit: ";
        cin >> choice;
        if (choice == 'e' || choice == 'E') {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        switch (choice) {
            case 'l':
                cout << "Length: 1. M to KM | 2. M to CM | 3. KM to Miles | 4. M to Feet: ";
                cin >> sub_choice;
                switch (sub_choice) {
                    case 1:
                        cout << "Enter meters: "; cin >> meters;
                        cout << meters << "m = " << meters / 1000 << "km" << endl;
                        break;
                    case 2:
                        cout << "Enter meters: "; cin >> meters;
                        cout << meters << "m = " << meters * 100 << "cm" << endl;
                        break;
                    case 3:
                        cout << "Enter kilometers: "; cin >> kilometers;
                        cout << kilometers << "km = " << kilometers * 0.621371 << " miles" << endl;
                        break;
                    case 4:
                        cout << "Enter meters: "; cin >> meters;
                        cout << meters << "m = " << meters * 3.28084 << " feet" << endl;
                        break;
                    default: cout << "Invalid choice." << endl;
                }
                break;
            case 'w':
                cout << "Weight: 1. KG to G | 2. KG to Pounds: ";
                cin >> sub_choice;
                switch (sub_choice) {
                    case 1:
                        cout << "Enter KG: "; cin >> kg;
                        cout << kg << "kg = " << kg * 1000 << "g" << endl;
                        break;
                    case 2:
                        cout << "Enter KG: "; cin >> kg;
                        cout << kg << "kg = " << kg * 2.20462 << " lbs" << endl;
                        break;
                    default: cout << "Invalid choice." << endl;
                }
                break;
            case 't':
                cout << "Temperature: 1. C to F | 2. C to K: ";
                cin >> sub_choice;
                switch (sub_choice) {
                    case 1:
                        cout << "Enter Celsius: "; cin >> celsius;
                        fahrenheit = (celsius * 1.8) + 32;
                        cout << celsius << "C = " << fahrenheit << "F" << endl;
                        break;
                    case 2:
                        cout << "Enter Celsius: "; cin >> celsius;
                        kelvin = celsius + 273.15;
                        cout << celsius << "C = " << kelvin << "K" << endl;
                        break;
                    default: cout << "Invalid choice." << endl;
                }
                break;
            case 'v':
                cout << "Velocity: 1. KM/H to M/S | 2. KM/H to MPH: ";
                cin >> sub_choice;
                switch (sub_choice) {
                    case 1:
                        cout << "Enter KM/H: "; cin >> kmh;
                        cout << kmh << " km/h = " << kmh / 3.6 << " m/s" << endl;
                        break;
                    case 2:
                        cout << "Enter KM/H: "; cin >> kmh;
                        cout << kmh << " km/h = " << kmh * 0.621371 << " mph" << endl;
                        break;
                    default: cout << "Invalid choice." << endl;
                }
                break;
            default:
                cout << "Invalid category. Please try again." << endl;
        }
    } while (true);
    return 0;
}
