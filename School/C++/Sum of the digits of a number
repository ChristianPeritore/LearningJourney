#include <iostream>
using namespace std;
int main () {
    int n, c;
    int s = 0;
    cout<<"Hi, please enter an integer of at least 10 "<<endl;
    cin>>n;
    while (n < 10) {
        cout<<"Number less than 10, try entering another one again "<<endl;
        cin>>n;
    }
    while (n > 0) {
        c = n % 10; 
        s += c;       
        n /= 10;        
    }
    cout<<"The sum is "<<s<<endl;
    return 0;
}
