#include <iostream>
using namespace std;
int main() {
    float total = 0;
    float price;
    cout << "Enter the price for each product (enter a negative number to finish):" << endl;
    cin >> price;
    do {
        if (price >= 0) {
            total = total + price;
            cin >> price;
        }
    } while (price >= 0);
    cout << "The total is: " << total << " €" << endl;
    return 0;
}
