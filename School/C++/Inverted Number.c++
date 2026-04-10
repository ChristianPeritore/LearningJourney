#include <iostream>
using namespace std;
int main() {
    int n, i = 0, r;
    cout<<"Enter a positive integer "<<endl;
    cin>>n;
    while (n < 0) {
        cout<<"Negative number, try again "<<endl;
        cin>>n;
    }
    while (n > 0) {
        r = n % 10;                
        i = i * 10 + r; 
        n /= 10;                    
    }
    cout<<"Inverted number: "<<i<<endl;
    return 0;
}
