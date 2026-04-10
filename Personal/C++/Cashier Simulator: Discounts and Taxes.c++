#include <iostream>
using namespace std;
int main() {
    string name;
    const double VAT = 22.0; // Italian IVA (Imposta sul Valore Aggiunto ---> Value Added Tax)
    double base_price, initial_discount, discounted_price, category_price, final_price;
    int category_choice;
    cout << "Hello, please enter the product name, price, and discount percentage (0-100):" << endl;
    cin >> name;
    cin >> base_price >> initial_discount;
    while (base_price < 0 || initial_discount < 0 || initial_discount > 100) {
        if (base_price < 0) {
            cout << "Error: Please re-enter a valid base price: " << endl;
            cin >> base_price;
        } else {
            cout << "Error: Please re-enter a valid discount (0-100): " << endl;
            cin >> initial_discount;
        }
    }
    discounted_price = base_price - (base_price * (initial_discount / 100));
    cout << "Which customer category do you belong to?" << endl;
    cout << "1. Standard (No extra discount)\n2. Student (10% extra)\n3. Senior (15% extra)" << endl;
    cout << "Selection: ";
    cin >> category_choice;
    while (category_choice < 1 || category_choice > 3) {
        cout << "Error: Invalid category. Please try again: " << endl;
        cin >> category_choice;
    }
    if (category_choice == 2) {
        category_price = discounted_price * 0.90; // 10% off
    } else if (category_choice == 3) {
        category_price = discounted_price * 0.85; // 15% off
    } else {
        category_price = discounted_price; // Standard
    }
    final_price = category_price + (category_price * (VAT / 100));
    if (final_price > 500) {
        cout << "Luxury purchase!" << endl;
    } else if (final_price < 10) {
        cout << "Budget purchase!" << endl;
    }
    cout << "FINAL PRICE FOR " << name << ": " << final_price << " €" << endl;
    cout << "Thank you for using this service!" << endl;
    return 0;
}
