#include <iostream>
using namespace std;
int main() {
    float total = 0;
    float price;
    cout << "Enter the price for each product (enter a negative number to stop): " << endl;
    cin >> price;
    while (price >= 0) {
        total = total + price;
        cin >> price;
    }
    cout << "The total is: " << total << " €" << endl;
    return 0;
}
