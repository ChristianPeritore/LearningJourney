#include <iostream>
using namespace std;
int main() {
    const float ACTION_PRICE = 10.0;
    const float COMEDY_PRICE = 8.0;
    const float DRAMA_PRICE = 9.0;
    const float BULK_DISCOUNT = 0.10;
    float basePrice = 0.0;
    int movieChoice, ticketType, quantity;
    float total;
    cout << "--- CINEMA BOOKING SYSTEM ---" << endl;
    cout << "Select movie genre (1.Action-10€ 2.Comedy-8€ 3.Drama-9€): " << endl;
    cin >> movieChoice;
    cout << "Select ticket type [1-Full Price 2-Reduced (Half Price)]: " << endl;
    cin >> ticketType;
    cout << "How many tickets would you like to book? " << endl;
    cin >> quantity;
    switch (movieChoice) {
        case 1:
            basePrice = ACTION_PRICE;
            break;
        case 2:
            basePrice = COMEDY_PRICE;
            break;
        case 3:
            basePrice = DRAMA_PRICE;
            break;
        default:
            cout << "Invalid movie selection." << endl;
            return 0;
    }
    if (ticketType == 2) {
        basePrice *= 0.5;
    } else if (ticketType != 1) {
        cout << "Invalid ticket selection." << endl;
        return 0;
    }
    total = basePrice * quantity;
    if (quantity > 2) {
        cout << "Applying 10% bulk discount for booking more than 2 tickets.\n";
        total -= (total * BULK_DISCOUNT); 
    }
    cout << "\n--- BOOKING SUMMARY ---" << endl;
    cout << "Movie Genre: ";
    switch (movieChoice) {
        case 1: cout << "Action" << endl; break;
        case 2: cout << "Comedy" << endl; break;
        case 3: cout << "Drama" << endl; break;
    }
    cout << "Ticket Type: " << (ticketType == 1 ? "Full Price" : "Reduced") << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total to pay: " << total << " €" << endl;
    cout << "Thank you for your booking!" << endl;
    return 0;
}
