#include <iostream>
using namespace std;
int main() {
    float amount, maxAmount, minAmount;
    int totalCount = 0, highValueCount = 0;
    float totalRevenue = 0;
    cout << "Enter the first amount: " << endl;
    cin >> amount;
    if (amount <= 0) {
        cout << "No amounts entered." << endl;
        return 0; 
    }
    maxAmount = amount;
    minAmount = amount;
    while (amount >= 0) {
        totalCount++;
        totalRevenue += amount;
        if (amount > maxAmount) maxAmount = amount;
        if (amount < minAmount) minAmount = amount;
        if (amount > 100) {
            highValueCount++;
        }
        cout << "Enter the next amount (negative number to stop): " << endl;
        cin >> amount;
        if (amount < 0) break;
    }
    cout << "\n--- DAILY REPORT ---" << endl;
    if (totalRevenue >= 1000) {
        cout << "Very positive day!" << endl;
    } else {
        cout << "Day could be improved." << endl;
    }
    cout << "Number of transactions: " << totalCount << endl;
    cout << "Total Revenue: " << totalRevenue << " €" << endl;
    cout << "Highest Sale: " << maxAmount << " €" << endl;
    cout << "Lowest Sale: " << minAmount << " €" << endl;
    cout << "Sales over 100€: " << highValueCount << endl;
    return 0;
}
