#include <iostream>
using namespace std;
int main() {
    int age;
    char hasLicense, licenseType;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 18) {
        cout << "Do you have a driver's license? (Y/N): " << endl;
        cin >> hasLicense;
        if (hasLicense == 'Y' || hasLicense == 'y') {
            cout << "Enter your license type (A-motorcycle, B-car, C-truck, D-bus): " << endl;
            cin >> licenseType;
            switch (licenseType) {
                case 'A':
                case 'a':
                    cout << "You can drive motorcycles." << endl;
                    break;
                case 'B':
                case 'b':
                    cout << "You can drive cars." << endl;
                    break;
                case 'C':
                case 'c':
                    cout << "You can drive trucks." << endl;
                    break;
                case 'D':
                case 'd':
                    cout << "You can drive buses." << endl;
                    break;
                default:
                    cout << "Invalid category entered." << endl;
                    break;
            }
        } else {
            cout << "You are an adult, but you cannot drive without a license." << endl;
        }
    } else {
        cout << "You are too young to drive." << endl;
    }
    return 0;
}
