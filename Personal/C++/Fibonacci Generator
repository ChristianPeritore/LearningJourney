#include <iostream>
using namespace std;
int main() {
    int n;
    int first = 1, second = 1, next;
    cout << "Enter the quantity of Fibonacci numbers to display: " << endl;
    cin >> n;
    if (n <= 0) {
        cout << "The number of elements must be greater than 0." << endl;
        return 1;
    }
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
        if (n == 2) {
        cout << "1 1" << endl;
        return 0;
    }
    cout << "1\n1";
    for (int i = 3; i <= n; ++i) {
        next = first + second;
        cout << "\n" << next;
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}
