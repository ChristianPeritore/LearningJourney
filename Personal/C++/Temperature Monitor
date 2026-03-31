#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;
    cout << "Hello, please enter the temperature in degrees Celsius (°C): " << endl;
    cin >> celsius;
    while (celsius < -273.15) {
        cout << "Error: Temperature cannot be lower than ABSOLUTE ZERO. Please enter a different value: " << endl;
        cin >> celsius;
    }
    fahrenheit = (celsius * 1.8) + 32;
    if (celsius > 35) {
        cout << "DANGER: Temperature too high! Activating cooling fans." << endl;
    } else if (celsius < 5) {
        cout << "DANGER: Temperature too low! Activating heating system." << endl;
    } else {
        cout << "Optimal temperature reached." << endl;
    }
    cout << "Current temperature: " << fahrenheit << " °F (" << celsius << " °C)" << endl;
    return 0;
}
