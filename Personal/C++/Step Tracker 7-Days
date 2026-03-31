#include <iostream>
using namespace std;
int main() {
    string name;
    int daily_steps, record_day, day_counter;
    int max_steps = 0;
    double total_steps = 0.0;
    double average_steps;
    cout << "Hello! Please enter your name: ";
    cin >> name;
    for (day_counter = 1; day_counter <= 7; day_counter++) {
        cout << "Hi " << name << "! Enter the steps taken on day " << day_counter << ": ";
        cin >> daily_steps;
        while (daily_steps <= 0) {
            cout << "Error: Invalid daily steps. Please try again: ";
            cin >> daily_steps;
        }
        total_steps += daily_steps;
        if (daily_steps > max_steps) {
            max_steps = daily_steps;
            record_day = day_counter;
        }
    }
    average_steps = total_steps / 7;
    cout << "\n--- WEEKLY SUMMARY FOR " << name << " ---" << endl;
    cout << "Total steps: " << total_steps << endl;
    cout << "Daily average: " << average_steps << endl;
    cout << "Best day: Day " << record_day << " with " << max_steps << " steps." << endl;
    return 0;
}
