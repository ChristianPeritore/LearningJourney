#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter the temperature (in °C): " << endl;
    cin >> temp;
    if (temp <= 0) {
        cout << "Solid (ice)" << endl;
    } 
    else if (temp > 0 && temp < 100) {
        cout << "Liquid" << endl;
    } 
    else {
        cout << "Gaseous (steam/vapor)" << endl;
    }
    return 0;
}
