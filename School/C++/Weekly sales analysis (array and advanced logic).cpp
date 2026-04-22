#include <iostream>
using namespace std;
int main() {
	int N;
	cout << "Enter number of weeks (max 52): ";
	cin >> N;
	if (N < 1 || N > 52) {
		cout << "Invalid value!" << endl;
		return 1;
	}
	int sales[52][7];
	for (int i = 0; i < N; i++) {
		cout << "\nWeek " << i + 1 << ":\n";
		for (int j = 0; j < 7; j++) {
			cout << " Day " << j + 1 << ": ";
			cin >> sales[i][j];
		}
	}
	int weeklyTotal[52] = {0};
	int dailyTotal[7] = {0};
	int globalTotal = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			weeklyTotal[i] += sales[i][j];
			dailyTotal[j] += sales[i][j];
			globalTotal += sales[i][j];
		}
	}
	cout << "\nTotal sales per week:\n";
	for (int i = 0; i < N; i++) {
		cout << "Week " << i + 1 << ": " << weeklyTotal[i] << endl;
	}
	cout << "\nTotal sales per day of the week:\n";
	for (int j = 0; j < 7; j++) {
		cout << "Day " << j + 1 << ": " << dailyTotal[j] << endl;
	}
	int maxWeek = 0;
	for (int i = 1; i < N; i++) {
		if (weeklyTotal[i] > weeklyTotal[maxWeek]) {
			maxWeek = i;
		}
	}
	cout << "\nWeek with highest sales: " << maxWeek + 1 << endl;
	int maxSales = sales[0][0];
	int weekMax = 0, dayMax = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			if (sales[i][j] > maxSales) {
				maxSales = sales[i][j];
				weekMax = i;
				dayMax = j;
			}
		}
	}
	cout << "Maximum sales occurred in week " << weekMax + 1
	     << ", day " << dayMax + 1
	     << " with " << maxSales << " sales\n";
	double average = (double)globalTotal / (N * 7);
	int countAboveAverage = 0;
	for (int i = 0; i < N; i++) {
		if (weeklyTotal[i] > average * 7) {
			countAboveAverage++;
		}
	}
	cout << "\nWeeks above average: " << countAboveAverage << endl;
	int weekIndex[52];
	for (int i = 0; i < N; i++) {
		weekIndex[i] = i;
	}
	for (int i = 0; i < N - 1; i++) {
		int maxIdx = i;
		for (int j = i + 1; j < N; j++) {
			if (weeklyTotal[weekIndex[j]] > weeklyTotal[weekIndex[maxIdx]]) {
				maxIdx = j;
			}
		}
		int temp = weekIndex[i];
		weekIndex[i] = weekIndex[maxIdx];
		weekIndex[maxIdx] = temp;
	}
	cout << "\nWeek ranking (from best to worst):\n";
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ") Week " << weekIndex[i] + 1
		     << " - Sales: " << weeklyTotal[weekIndex[i]] << endl;
	}
	return 0;
}
