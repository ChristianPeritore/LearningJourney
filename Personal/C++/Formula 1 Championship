#include <iostream>
using namespace std;
int main() {
    double laps[5];
    double max_time, min_time;
    int best_lap_number = 1;
    cout << "--- LAP TIME TRACKER ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter time for lap " << i + 1 << " (seconds): ";
        cin >> laps[i];
        while (laps[i] <= 0) {
            cout << "Invalid time. Please enter a positive value for lap " << i + 1 << ": ";
            cin >> laps[i];
        }
    }
    min_time = laps[0];
    max_time = laps[0];
    best_lap_number = 1;
    for (int i = 1; i < 5; i++) {
        if (laps[i] > max_time) {
            max_time = laps[i];
        }
        if (laps[i] < min_time) {
            min_time = laps[i];
            best_lap_number = i + 1;
        }
    }
    cout << "\n--- RESULTS ---" << endl;
    cout << "Worst Lap (Slowest): " << max_time << " s" << endl;
    cout << "Best Lap (Fastest): " << min_time << " s (Recorded on lap " << best_lap_number << ")" << endl;
    return 0;
}
