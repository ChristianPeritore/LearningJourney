#include <iostream>
#include <string>
using namespace std;
int main () {
    int decimal_num;
    string binary_str = "";
    cout << "Enter a positive integer:" << endl;
    cin >> decimal_num;
    if (decimal_num < 1) {
        cout << "Error: Number must be at least 1." << endl;
        return 1;
    }
    int temp = decimal_num;
    while (temp > 0) {
        binary_str = (char)('0' + (temp % 2)) + binary_str;
        temp = temp / 2;
    }
    cout << "The decimal number " << decimal_num << " in binary is " << binary_str << endl;
    return 0;
}
