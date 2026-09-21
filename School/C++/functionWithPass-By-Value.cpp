#include <iostream>
using namespace std;
int sum(int a, int b, int c) {
    c = a + b;
    return c;
}
int main() {
    int a = 10;
    int b = 7;
    int c = 0;
    c = sum(a, b, c);
    cout << "C is " << c << endl;
    return 0;
}
