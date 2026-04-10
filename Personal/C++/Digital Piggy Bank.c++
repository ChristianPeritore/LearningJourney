#include <iostream>
using namespace std;
int main() {
    double goal = 150.0;
    double total_saved = 0.0;
    int days = 0;
    double amount_inserted, remaining_balance;
    cout << "--- SAVINGS TRACKER ---" << endl;
    cout << "Your goal is: " << goal << " €" << endl;
    while (total_saved < goal) {
        cout << "\nHow many € do you want to put in the piggy bank today?" << endl;
        cin >> amount_inserted;
        while (amount_inserted <= 0) {
            cout << "Error: Please enter an amount greater than 0." << endl;
            cin >> amount_inserted;
        }
        total_saved += amount_inserted;
        days++;
        remaining_balance = goal - total_saved;
        if (remaining_balance > 0) {
            cout << "You still need: " << remaining_balance << " €" << endl;
        }
    }
    cout << "\n===============================" << endl;
    cout << "Goal reached! It took you " << days << " days." << endl;
    cout << "Total saved: " << total_saved << " €" << endl;
    return 0;
}
