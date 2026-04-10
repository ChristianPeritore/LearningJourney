#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, ris;
    int conttot = 0, scelta = 1;
    long long risf = 1; //Used long long to handle larger factorials
    int contf;
    while (scelta >= 1 && scelta <= 7) {
        cout << "\n--- CALCULATOR MENU ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial << endl;
        cout << "6. Exponentiation (a^b)" << endl;
        cout << "7. Square Root (of a)" << endl;
        cout << "8. Exit" << endl;
        cout << "Choose an operation (1-8): ";
        cin >> scelta;
        if (scelta == 8) {
            cout << "You left the program." << endl;
            break;
        }
        if (scelta < 1 || scelta > 8) {
            cout << "Errore: numero non valido." << endl;
            continue; 
        }
        switch (scelta) {
            case 1:
                cout << "Addition. Enter 2 numbers: ";
                cin >> a >> b;
                ris = a + b;
                cout << "The sum between " << a << " and " << b << " is " << ris << endl;
                conttot++;
                break;
            case 2:
                cout << "Substraction. Enter 2 numbers: ";
                cin >> a >> b;
                ris = a - b;
                cout << "The difference between " << a << " and " << b << " is " << ris << endl;
                conttot++;
                break;
            case 3:
                cout << "Multiplication. Enter 2 numbers: ";
                cin >> a >> b;
                if (a == 0 || b == 0) {
                    cout << "The result is 0." << endl;
                } else {
                    ris = a * b;
                    cout << "The product between " << a << " and " << b << " is " << ris << endl;
                }
                conttot++;
                break;
            case 4:
                cout << "Division. Enter 2 numbers: ";
                cin >> a >> b;
                if (b == 0) {
                    cout << "Error: impossible to divide by 0." << endl;
                } else {
                    ris = a / b;
                    cout << "The quotient between " << a << " and " << b << " is " << ris << endl;
                    conttot++;
                }
                break;
            case 5:
                cout << "Factorial. Enter a positive integer: ";
                cin >> a;
                if (a < 0) {
                    cout << "Error: negative number." << endl;
                } else if (a == 0 || a == 1) {
                    cout << "The factorial is 1." << endl;
                    conttot++;
                } else {
                    risf = 1;
                    for (contf = 2; contf <= a; contf++) {
                        risf *= contf;
                    }
                    cout << "The factorial of " << a << " is " << risf << endl;
                    conttot++;
                }
                break;
            case 6:
                cout << "Exponentiation to a power. Enter the base and exponent.: ";
                cin >> a >> b;
                ris = pow(a, b);
                cout << a << " raised to " << b << " is " << ris << endl;
                conttot++;
                break;
            case 7:
                cout << "Square root. Enter a number: ";
                cin >> a;
                if (a < 0) {
                    cout << "Error: it is impossible to find the square root of a negative number." << endl;
                } else {
                    ris = sqrt(a);
                    cout << "The square root of " << a << " is " << ris << endl;
                    conttot++;
                }
                break;
        }
        if (conttot > 0) {
            cout << "(Operations performed so far: " << conttot << ")" << endl;
        }
    }

    cout << "\nProgram completed. Total operations completed: " << conttot << endl;
    return 0;
}
