#include <iostream>
using namespace std;
int main() {
    int totalNumbers;
    float currentNumber, minVal, maxVal;
    int counter = 0;
    cout << "How many numbers do you want to enter?" << endl;
    cin >> totalNumbers;
    cout << "Enter the first number: " << endl;
    cin >> currentNumber;
    maxVal = currentNumber; 
    minVal = currentNumber;
    counter++; 
    while (counter < totalNumbers) {
        cout << "Enter the next number: " << endl;
        cin >> currentNumber;
        if (currentNumber > maxVal) {
            maxVal = currentNumber;
        } 
        else if (currentNumber < minVal) {
            minVal = currentNumber;
        }
                counter++;
    }
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;
    return 0;
}
