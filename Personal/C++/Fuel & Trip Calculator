#include <iostream>
using namespace std;
int main() {
    double distance, avg_consumption, fuel_price_per_liter, parking_toll_cost;
    double fuel_needed, fuel_cost, total_cost, cost_per_km;
    string car_brand;
    int car_year;
    cout << "Hello! To calculate this trip, I will need some information one by one." << endl;
        cout << "1. Enter your car brand: ";
    cin >> car_brand;
        cout << "2. What year was it made? ";
    cin >> car_year;
        cout << "3. Distance to travel (km): ";
    cin >> distance;
        cout << "4. Average fuel consumption (km/liter): ";
    cin >> avg_consumption;
        cout << "5. Fuel price (per liter): ";
    cin >> fuel_price_per_liter;
        cout << "6. Parking or toll costs (enter 0 if none): ";
    cin >> parking_toll_cost;
    while (car_year < 1900 || car_year > 2026 || distance <= 0 || avg_consumption <= 0 || fuel_price_per_liter <= 0 || parking_toll_cost < 0) {
        cout << "\nOne or more entries are incorrect. For security reasons, please re-enter all data in order:" << endl;
        cout << "(Brand, Year, Distance, Consumption, Fuel Price, Parking/Tolls)" << endl;
        cin >> car_brand >> car_year >> distance >> avg_consumption >> fuel_price_per_liter >> parking_toll_cost;
    }
    fuel_needed = distance / avg_consumption;
    fuel_cost = fuel_needed * fuel_price_per_liter;
    total_cost = fuel_cost + parking_toll_cost;
    cost_per_km = total_cost / distance;
    cout << "\n--- TRIP SUMMARY FOR YOUR " << car_year << " " << car_brand << " ---" << endl;
    cout << "Fuel needed: " << fuel_needed << " liters" << endl;
    cout << "Fuel cost: " << fuel_cost << " €" << endl;
    cout << "Total trip cost: " << total_cost << " €" << endl;
    cout << "COST PER KM: " << cost_per_km << " €/km" << endl;
    return 0;
}
