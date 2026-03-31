#include <iostream>
using namespace std;
int main() {
    float initialPrice, discountedPrice, discountAmount;
    int discountCode;
    const int DISCOUNT_RATE_1 = 10;
    const int DISCOUNT_RATE_2 = 20;
    cout << "Enter the initial price: ";
    cin >> initialPrice;
    cout << "Enter the discount code (1 or 2): ";
    cin >> discountCode;
    if (discountCode == 1) {
        discountAmount = (initialPrice * DISCOUNT_RATE_1) / 100;
        discountedPrice = initialPrice - discountAmount;
        cout << "Discount applied (10%)! The final price is: " << discountedPrice << endl;
    } 
    else if (discountCode == 2) {
        discountAmount = (initialPrice * DISCOUNT_RATE_2) / 100;
        discountedPrice = initialPrice - discountAmount;
        cout << "Discount applied (20%)! The final price is: " << discountedPrice << endl;
    } 
    else {
        cout << "No discount applied. The price is: " << initialPrice << endl;
    }
    return 0;
}
