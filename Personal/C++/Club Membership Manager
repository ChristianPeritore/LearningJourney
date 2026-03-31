#include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    double weight;
    cout << "Hello, please enter your name, age, and weight: " << endl;
    cin >> name;
    cin >> age;
    cin >> weight;
    while (age < 10 || age > 90 || weight <= 0) {
        if ((age < 10 || age > 90) && weight <= 0) {
            cout << "Invalid age and weight, please try again: " << endl;
            cin >> age >> weight;
        } else if (age < 10 || age > 90) {
            cout << "Invalid age (must be between 10 and 90), please try again: " << endl;
            cin >> age;
        } else if (weight <= 0) {
            cout << "Invalid weight, please try again: " << endl;
            cin >> weight;
        }
    }
    if (age < 18) {
        cout << "Category: Junior | Price: 20 €" << endl;
    } else if (age > 60) {
        cout << "Category: Senior | Price: 25 €" << endl;
    } else {
        cout << "Category: Adult  | Price: 35 €" << endl;
    }
    if (weight > 100) {
        cout << "Recommended: Intense Cardio Program" << endl;
    } else if (weight < 50) {
        cout << "Recommended: Strength Building Program" << endl;
    }
    cout << "\nRegistration complete for " << name << ". Welcome!" << endl;
    return 0;
}
