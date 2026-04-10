#include <iostream>
using namespace std;
int main() {
	double march[31];
	int bestDay = 0, modifiedDays = 0;
	double average1020 = 0.0, totalAverage = 0.0, totalKm = 0.0;
	for (int i = 0; i < 31; i++) {
		cout << "Enter the km for March " << i + 1 << ": ";
		cin >> march[i];
		totalKm += march[i];
		if (i >= 9 && i <= 19) {
			average1020 += march[i];
		}
		if (march[i] > march[bestDay])
			bestDay = i; 
	}
	cout << "\nKm traveled during the month: " << totalKm << " km" << endl;
	average1020 /= 11.0;
	cout << "\nAverage from March 10th to 20th: " << average1020 << " km" << endl;
	cout << "\nBest day: " << bestDay + 1 << " (with " << march[bestDay] << " km)" << endl;
	totalAverage = totalKm / 31.0;
	cout << "\nDays with km below average (" << totalAverage << " km): ";
	for (int i = 0; i < 31; i++) {
		if (march[i] < totalAverage) {
			cout << i + 1 << " ";
		}
	}
	cout << "\nModify km for day 13: " << endl;
	cin >> march[12];
	for (int i = 0; i < 31; i++) {
		if (march[i] < 1) {
			cout << "\nModify day " << i + 1 << endl;
			cin >> march[i];
			cout << "You entered the value " << march[i] << endl;
			modifiedDays++;
		}
	}
	totalKm = 0.0;
	for (int i = 0; i < 31; i++) {
		totalKm += march[i];
	}
	cout << "\nNew total km: " << totalKm << " km" << endl;
	return 0;
}
