#include <iostream>
using namespace std;
int main() {
    const string password = "perit";
    string user_attempt = "";
    int attempts_left = 3;
    while (user_attempt != password && attempts_left > 0) {
        cout << "Enter the password (Attempts remaining: " << attempts_left << "): " << endl;
        cin >> user_attempt;
        if (user_attempt != password) {
            attempts_left--;
            if (attempts_left > 0) {
                cout << "WARNING: Incorrect password. Try again!" << endl;
            }
        }
    }
    if (user_attempt == password) {
        cout << "Access granted. Welcome!" << endl;
    } else {
        cout << "Access denied. No attempts remaining." << endl;
    }
    return 0;
}
