#include <iostream>
using namespace std;
int main() {
    int mainChoice = 1, planetChoice = 1;
    const double EarthG = 9.81, MarsG = 3.71, MoonG = 1.62, JupiterG = 24.79;
    double weight, mass;
    do {
        cout << "\nChoose whether to convert from Weight or from Mass (Enter 3 to exit):" << endl;
        cout << "1. Convert from Mass (kg)" << endl;
        cout << "2. Convert from Weight (N)" << endl;
        cin >> mainChoice;
        if (mainChoice == 3) {
            cout << "Program terminated." << endl;
            break;
        }
        while (mainChoice < 1 || mainChoice > 3) {
            cout << "Invalid selection, please try again: ";
            cin >> mainChoice;
        }
        switch (mainChoice) {
            case 1:
                cout << "Enter the mass in kg: ";
                cin >> mass;
                while (mass <= 0) {
                    cout << "Error: Mass must be positive. Try again: ";
                    cin >> mass;
                }
                cout << "Choose a planet (1 Earth, 2 Mars, 3 Moon, 4 Jupiter) or 5 to exit: " << endl;
                cin >> planetChoice;
                if (planetChoice == 5) {
                    cout << "Program terminated." << endl;
                    return 0;
                }
                while (planetChoice < 1 || planetChoice > 5) {
                    cout << "Invalid selection, please try again: ";
                    cin >> planetChoice;
                }
                switch (planetChoice) {
                    case 1: cout << "Earth" << endl; weight = mass * EarthG; break;
                    case 2: cout << "Mars" << endl; weight = mass * MarsG; break;
                    case 3: cout << "Moon" << endl; weight = mass * MoonG; break;
                    case 4: cout << "Jupiter" << endl; weight = mass * JupiterG; break;
                }
                break;
            case 2:
                cout << "Enter the weight in Newtons (N): ";
                cin >> weight;
                while (weight <= 0) {
                    cout << "Error: Weight must be positive. Try again: ";
                    cin >> weight;
                }
                cout << "Choose a planet (1 Earth, 2 Mars, 3 Moon, 4 Jupiter) or 5 to exit: " << endl;
                cin >> planetChoice;
                if (planetChoice == 5) {
                    cout << "Program terminated." << endl;
                    return 0;
                }
                while (planetChoice < 1 || planetChoice > 5) {
                    cout << "Invalid selection, please try again: ";
                    cin >> planetChoice;
                }
                switch (planetChoice) {
                    case 1: cout << "Earth" << endl; mass = weight / EarthG; break;
                    case 2: cout << "Mars" << endl; mass = weight / MarsG; break;
                    case 3: cout << "Moon" << endl; mass = weight / MoonG; break;
                    case 4: cout << "Jupiter" << endl; mass = weight / JupiterG; break;
                }
                break;
        }
        if (weight > 1000) {
            cout << "You would be very heavy!" << endl;
        } else if (weight < 100) {
            cout << "You would feel very light!" << endl;
        }
        cout << "Weight: " << weight << " N\nMass: " << mass << " kg" << endl;
    } while (mainChoice != 3);
    return 0;
}
