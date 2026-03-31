#include <iostream>
using namespace std;
int main() {
    float num1, num2, result;
    char operation;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the operator (+, -, *, /): " << endl;
    cin >> operation;
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 1;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
        return 1;
    }
    cout << "The result is: " << result << endl;
    return 0;
}
