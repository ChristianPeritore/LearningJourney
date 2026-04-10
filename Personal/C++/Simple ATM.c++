#include <iostream>
using namespace std;
int main() {
    double balance = 1000.0; // Initial balance in €
    int choice = 1;
    double amount; // Amount to deposit or withdraw
    do {
        cout << "\n--- ATM BANKING SYSTEM ---" << endl;
        cout << "1. View Balance" << endl;
        cout << "2. Deposit Funds" << endl;
        cout << "3. Withdraw Funds" << endl;
        cout << "0. Exit" << endl;
        cout << "Selection: ";
        cin >> choice;
        while (choice < 0 || choice > 3) {
            cout << "Invalid selection. Please enter a number between 0 and 3: ";
            cin >> choice;
        }
        switch (choice) {
            case 1:
                cout << "\n--- VIEW BALANCE ---" << endl;
                cout << "Current Balance: " << balance << " €" << endl;
                break;
            case 2:
                cout << "\n--- DEPOSIT FUNDS ---" << endl;
                cout << "Current Balance: " << balance << " €" << endl;
                cout << "How many € would you like to deposit? ";
                cin >> amount;
                                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << " €" << endl;
                } else {
                    cout << "Error: Deposit amount must be positive." << endl;
                }
                break;
            case 3:
                cout << "\n--- WITHDRAW FUNDS ---" << endl;
                cout << "Current Balance: " << balance << " €" << endl;
                cout << "How many € would you like to withdraw? ";
                cin >> amount;
                while (amount > balance || amount <= 0) {
                    if (amount <= 0) {
                        cout << "Error: Withdrawal must be greater than 0. Try again: ";
                    } else {
                        cout << "WARNING: Insufficient funds. Please enter a lower amount: ";
                    }
                    cin >> amount;
                }
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << " €" << endl;
                break;
            case 0:
                cout << "Thank you for using our banking services. Goodbye!" << endl;
                return 0;
        }
    } while (choice != 0);
    return 0;
}
