#include <iostream>
using namespace std;
// 'c' is passed by value (a local copy is created)
int sum(int a, int b, int c) { 
    c = a + b;  // Modifies only the local copy of 'c'
    return c;   // Returns the calculated sum
}
int main() {
    int a = 10, b = 7, c = 0;
    // Assigns the returned value of sum() to 'c' in main
    c = sum(a, b, c); 
    cout << "C is " << c << endl; // Prints 17
    return 0;
}
