#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    int choice = 0;
    while (choice != 3) {
        cout << "\nEnter a number corresponding to an option:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter degrees in Celsius: ";
                cin >> celsius;
                fahrenheit = (celsius * 1.8) + 32;
                cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
                break;
            case 2:
                cout << "Enter degrees in Fahrenheit: ";
                cin >> fahrenheit;
                celsius = (fahrenheit - 32) * 0.5555;
                cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
                break;
            case 3:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Error: Invalid option. Please try again." << endl;
                break;
        }
    }
    return 0;
}
