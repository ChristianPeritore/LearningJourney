#include <iostream>
using namespace std;
int main() {
    int age;
    char isAccompanied;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Are you accompanied by an adult? (Y/N): " << endl;
    cin >> isAccompanied;
    if (age < 10) {
        if (isAccompanied == 'Y' || isAccompanied == 'y') {
            cout << "Free entry" << endl;
        } else {
            cout << "You cannot enter without an adult." << endl;
        }
    } 
    else if (age >= 10) {
        if (age < 18) {
            cout << "Reduced ticket price" << endl;
        } else {
            cout << "Full ticket price" << endl;
        }
    } 
    else {
        cout << "Invalid age entered." << endl;
    }
    return 0;
}
