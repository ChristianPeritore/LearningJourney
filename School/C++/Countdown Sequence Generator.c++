#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    do {
        n = n - 1;
        cout << n << " ";
    } while (n > 1);

    cout << endl;
    return 0;
}
