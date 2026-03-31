#include <iostream>
using namespace std;
int main() {
    double temp;
    double sum = 0.0, max_temp = -999.0, min_temp = 999.0, average = 0.0;
        cout << "--- Weekly Temperature Tracker ---" << endl;
    for (int day = 1; day <= 7; day++) {
        cout << "Enter temperature for day " << day << ": ";
        cin >> temp;
        if (!cin) {
            cout << "Error: You can only enter numbers!" << endl;
            return 1;
        }
        sum += temp;
        if (day == 1) {
            max_temp = temp;
            min_temp = temp;
        } else {
            if (temp > max_temp) {
                max_temp = temp;
            }
            if (temp < min_temp) {
                min_temp = temp;
            }
        }
    }
    average = sum / 7;
    cout << "\n--- Statistics ---" << endl;
    cout << "Average Temperature: " << average << "°" << endl;
    cout << "Maximum Value: " << max_temp << "°" << endl;
    cout << "Minimum Value: " << min_temp << "°" << endl;
    return 0;
}
