#include <iostream>
using namespace std;
// 'c' is passed by reference (&), aliasing the variable from main
int sum(int a, int b, int& c) { 
    c = a + b;  // Directly modifies the variable 'c' inside main
    return c;   // Returns the value, though 'c' is already updated
}
int main() {
    int a = 10, b = 7, c = 0; 
    sum(a, b, c); // Updates 'c' directly via reference (return value is unused here)
    cout << "C is " << c << endl; // Prints 17
    return 0;
}
