#include <iostream>
using namespace std;
int main() {
    string name;
    double gross_price, final_price, price_per_kg;
    int discount_perc, weight_grams;
    cout << "Hello! Please enter the product name: ";
    cin >> name;
    cout << "Enter the price, weight (in grams), and discount percentage (0-100): " << endl;
    cin >> gross_price >> weight_grams >> discount_perc;
    while (gross_price <= 0 || weight_grams <= 0 || discount_perc < 0 || discount_perc > 100) {
        cout << "Error: Please re-enter the price, weight, and discount percentage correctly: " << endl;
        cin >> gross_price >> weight_grams >> discount_perc;
    }
    final_price = gross_price * (1.0 - (discount_perc / 100.0));
    price_per_kg = (final_price / weight_grams) * 1000;
    cout << "\n--- RESULTS FOR " << name << " ---" << endl;
    cout << "Final Price: " << final_price << " €" << endl;
    cout << "Price per kg: " << price_per_kg << " €/kg" << endl;
    return 0;
}
