#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double bmi, height, weight;
    cout << "Hello! Please enter your weight in kg and height in meters (e.g., 1.75): " << endl;
    cin >> weight >> height;
    while (weight <= 0 || height <= 0) {
        if (weight <= 0 && height <= 0) {
            cout << "Both values are invalid. Please re-enter weight and height: " << endl;
            cin >> weight >> height;
        } else if (weight <= 0) {
            cout << "Invalid weight. Please try again: " << endl;
            cin >> weight;
        } else {
            cout << "Invalid height. Please try again: " << endl;
            cin >> height;
        }
    }
    bmi = weight / (pow(height, 2));
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Category: Underweight. You should consider increasing your caloric intake." << endl;
    } 
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Category: Normal weight. Great job, keep it up!" << endl;
    } 
    else if (bmi >= 25 && bmi < 30) {
        cout << "Category: Overweight. You might want to monitor your diet." << endl;
    } 
    else {
        cout << "Category: Obese. It is strongly recommended to consult a nutritionist for a structured diet and increase your physical activity." << endl;
    }
    return 0;
}
