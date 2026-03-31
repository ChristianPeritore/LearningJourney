#include <iostream>
using namespace std;
int main () {
	int limit;
	float sum = 0;
	int current_number = 0;
	cout << "Enter a limit to calculate the sum of even numbers:" << endl;
	cin >> limit;
	if (limit < 2) {
		cout << "Error: Limit must be at least 2." << endl;
		return 1;
	} else if (limit == 2) {
		cout << "You entered 2, the sum is 2. End of program." << endl;
		return 0;
	}
	current_number++;
	while (current_number <= limit) {
		if (current_number % 2 == 0) {
			sum += current_number;
			current_number++;
		} else {
			current_number++;
		}
	}
	cout << "The sum of even numbers from 2 up to " << limit << " is " << sum << endl;
	return 0;
}
