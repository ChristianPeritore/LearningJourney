#include <iostream>
using namespace std;
int main() {
    int total_numbers, choice;
    float input_value;
    float sum = 0, average = 0;
    int counter = 0;
    cout << "Hello, how many numbers would you like to enter?" << endl;
    cin >> total_numbers;
    while (counter < total_numbers) {
        cout << "Enter a number: ";
        cin >> input_value;
        if (input_value <= 0) {
            cout << "Error: invalid number (must be positive)." << endl;
            return 1;
        }
        sum += input_value;
        counter++;
    }
    if (total_numbers > 0) {
        average = sum / total_numbers;
    }
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "What would you like to see?" << endl;
        cout << "1. Sum" << endl;
        cout << "2. Average" << endl;
        cout << "3. Check if sum is positive, negative, or zero" << endl;
        cout << "Enter any other number to exit." << endl;
        cout << "Choice: ";
        cin >> choice;
        if (choice < 1 || choice > 3) {
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        }
        switch (choice) {
            case 1:
                cout << "The sum is: " << sum << endl;
                break;
            case 2:
                cout << "The average is: " << average << endl;
                break;
            case 3:
                if (sum > 0) {
                    cout << "The sum is positive." << endl;
                } else if (sum < 0) {
                    cout << "The sum is negative." << endl;
                } else {
                    cout << "The sum is exactly zero." << endl;
                }
                break;
        }  
    } while (choice >= 1 && choice <= 3);
    return 0; 
}
