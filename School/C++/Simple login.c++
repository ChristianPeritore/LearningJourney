#include <iostream>
using namespace std;
int main() {
    string username; 
    int password;
    cout << "Enter username: " << endl;
    cin >> username;
    cout << "Enter password: " << endl;
    cin >> password;
    if (username == "admin" || username == "Admin") { 
        if (password == 1234) {
            cout << "Access granted" << endl;
        } else {
            cout << "Incorrect password" << endl;
        }
    } 
    else if (username == "guest" || username == "Guest") {
        cout << "Limited access" << endl;
    } 
    else {
        cout << "User does not exist" << endl;
    }
    return 0;
}
