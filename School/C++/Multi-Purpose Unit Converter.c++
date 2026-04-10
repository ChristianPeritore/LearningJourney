#include <iostream>
using namespace std;
int main() {
    double valueToConvert, convertedValue;
    int choice;
    cout << "Select conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Meters to Kilometers" << endl;
    cout << "4. Kilometers to Meters" << endl;
    cout << "Choice: ";
    cin >> choice;
    cout << "Enter the value to convert: ";
    cin >> valueToConvert;
    switch (choice) {
        case 1:
            convertedValue = (valueToConvert * 1.8) + 32;
            break;
        case 2:
            convertedValue = (valueToConvert - 32) / 1.8;
            break;
        case 3:
            convertedValue = valueToConvert / 1000;
            break;
        case 4:
            convertedValue = valueToConvert * 1000;
            break;
        default:
            cout << "Invalid selection!" << endl;
            return 1;
    }
    cout << "The converted value is: " << convertedValue << endl;
    return 0;
}
