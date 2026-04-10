#include <iostream>
using namespace std;
int main() {
    string firstName, lastName;
    int age;
    cout << "--- AIRPORT CHECK-IN ---" << endl;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 17) {
        cout << "Notice: As a minor, you must be accompanied by an adult." << endl;
    } else {
        cout << "Document valid. Welcome, " << firstName << " " << lastName << "." << endl;
        cout << "Your seat is 12A, Gate B5." << endl;
    }
    cout << "\n--- LUGGAGE WEIGHT & SIZE CHECK ---" << endl;
    int weight, dimensions;
    cout << "Enter carry-on weight (kg): ";
    cin >> weight;
    cout << "Enter carry-on dimensions (cm): ";
    cin >> dimensions;
    if (weight <= 10 && dimensions <= 55) {
        cout << "Check passed. You may proceed." << endl;
    } else {
        cout << "Check FAILED. Your luggage exceeds the carry-on limits." << endl;
    }
    cout << "\n--- SECURITY CONTROL ---" << endl;
    int bags, ml;
    cout << "Reminder: Please remove all electronic devices from your hand luggage." << endl;
    cout << "How many bags are you carrying through security? ";
    cin >> bags;
    cout << "How many ml of liquids are you carrying? ";
    cin >> ml;
    if (bags <= 2) {
        cout << "Bag count is valid." << endl;
    } else {
        cout << "Warning: Number of bags exceeds the limit." << endl;
    }
    if (ml <= 100) {
        cout << "Liquid quantity is valid." << endl;
    } else {
        cout << "Excess liquids must be disposed of in the bin." << endl;
    }
    cout << "\n--- BOARDING PRIORITY ---" << endl;
    string ticketClass;
    int checkedBags, hasChildren;
    cout << "Enter ticket class (Business or Economy): ";
    cin >> ticketClass;
    cout << "Enter number of checked (hold) bags: ";
    cin >> checkedBags;
    cout << "Are there children in your group? (1 for Yes, 0 for No): ";
    cin >> hasChildren;
    cout << "\n--- FINAL BOARDING DETAILS ---" << endl;
    if (ticketClass == "Business") {
        cout << "STATUS: PRIORITY 1 (Business Class Passengers)" << endl;
    } else if (hasChildren == 1) {
        cout << "STATUS: PRIORITY 2 (Families with children)" << endl;
    } else if (checkedBags == 0) {
        cout << "STATUS: PRIORITY 3 (Passengers with no checked luggage)" << endl;
    } else {
        cout << "STATUS: Standard Boarding" << endl;
    }
    cout << "Ticket Class: " << ticketClass << endl;
    cout << "Checked Bags: " << checkedBags << endl;
    cout << "Traveling with children: " << (hasChildren ? "Yes" : "No") << endl;
    return 0;
}
