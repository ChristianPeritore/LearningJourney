#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cout << "Enter n value: ";
    cin >> n;
    cout << "Prime numbers from 2 to " << n << ":" << endl;
    for (int i = 2; i <= n; i++) {
        bool primo = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << i << endl;
        }
    }
    return 0;
}
