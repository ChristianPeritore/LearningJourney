#include <iostream>
using namespace std;
int main() {
    float initialPrice, finalPrice; 
    int age, dayOfWeek;
    const float DISCOUNT_UNDER_18 = 0.20; // 20%
    const float DISCOUNT_OVER_65 = 0.30;  // 30%
    const float DISCOUNT_SUNDAY = 0.10;   // 10%
    float baseDiscount = 0.0;
    float additionalDiscount = 0.0;
    float totalDiscount = 0.0;
    cout << "Enter the ticket price: " << endl;
    cin >> initialPrice;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter the day of the week (1-7, where 7 is Sunday): " << endl;
    cin >> dayOfWeek;
    if (age < 18) {
        baseDiscount = DISCOUNT_UNDER_18;
        cout << "Underage discount applied (20%)." << endl;
    } else if (age >= 65) {
        baseDiscount = DISCOUNT_OVER_65;
        cout << "Senior discount applied (30%)." << endl;
    } else {
        baseDiscount = 0.0;
        cout << "No age-based discount." << endl;
    }
    switch (dayOfWeek) {
        case 7:
            additionalDiscount = DISCOUNT_SUNDAY;
            cout << "Sunday extra discount applied (10%)." << endl;
            break;
        default:
            additionalDiscount = 0.0;
            cout << "No additional discount for this day." << endl;
            break;
    }
    totalDiscount = baseDiscount + additionalDiscount;
    finalPrice = initialPrice * (1.0 - totalDiscount);
    cout << "\n--- RECEIPT ---" << endl;
    cout << "Initial Price: " << initialPrice << " EUR" << endl;
    cout << "Total Discount: " << totalDiscount * 100 << "%" << endl;
    cout << "Final Price: " << finalPrice << " EUR" << endl;
    return 0;
}
