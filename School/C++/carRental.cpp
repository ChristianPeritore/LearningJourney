#include <iostream>
using namespace std;
// 1. It requests data from the user and returns the values to the main function by reference
void askData(int &days, double &dailyCost) {
    cout<<"Enter the number of rental days: "<<endl;
    cin>>days;
    while (days <= 0) {
        cout<<"Days cannot be negative, try again"<<endl;
        cin>>days;
    }
    cout << "Enter the daily cost of the car (€): "<<endl;
    cin >> dailyCost;
    while (dailyCost <= 0) {
        cout<<"The daily cost of the car cannot be negative, try again"<<endl;
        cin>>dailyCost;
    }
}
// 2. Calculates and returns the base price (pass-by-value)
double calcuateBaseCost(int days, double dailyCost) {
    return days * dailyCost;
}
// 3. Apply a 15% discount if the number of days exceeds 7 (direct modification by reference)
void applyDiscount(double &price, int days) {
    if (days > 7) {
        price -= price * 0.15; // is equivalent to: price = price * 0.85
    }
}
// 4. Adds a fixed fee of 20 euros (direct modification for reference)
void addAddtionalTax(double &price) {
    const double fixedFee = 20.0;
    price += fixedFee;
}
int main() {
    int rentalDays;
    double dailyCost;
    // 1. Obtain input data
    askData(rentalDays,dailyCost);
    // 2. Calculate the basic price
    double totalPrice = calcuateBaseCost(rentalDays, dailyCost);
    // 3. Display the base price on screen
    cout<<"\nBase rental price: "<<totalPrice<<" €"<<endl;
    // 4. Check for and apply the 15% discount, if applicable
    applyDiscount(totalPrice, rentalDays);
    if (rentalDays > 7) {
        cout<<"15% discount applied (rental exceeding 7 days)"<<endl;
    } else {
        cout<<"No discount applied"<<endl;
    }
    // 5. Adding the fixed fee
    addAddtionalTax(totalPrice);
    // 6. Printing the final price
    cout<<"Final price to pay (including €20.00 tax): "<<totalPrice<<" €"<<endl;
    return 0;
}
