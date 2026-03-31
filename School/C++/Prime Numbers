#include <iostream>
using namespace std;
int main () {
    int n;
    int cont = 0;
    bool a = true;  // initialized to true
    cout<<"Enter a positive number"<<endl;
    cin>>n;
    while (n <= 0) {
        cout<<"Error, try again"<<endl;
        cin>>n;
    }
    for (cont = 2; cont < n; cont++) {  // start from 2, removed double increase
        if (n % cont == 0) {  // if divisible, it is NOT a prime number
            a = false;
        }
    }
    if (a == true) {
        cout<<"Prime number"<<endl;
    } else {
        cout<<"Not-prime number"<<endl;
    }
    return 0;
}
