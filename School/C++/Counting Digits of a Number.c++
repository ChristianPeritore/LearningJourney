#include <iostream>
using namespace std;
int main () {
    int N;
    int nc = 0;
    cout<<"Enter a positive integer "<<endl;
    cin>>N;
    while (N < 0) {
        cout<<"Try again, unable to enter negative number "<<endl;
        cin>>N;
    }
    if (N == 0) {
        nc = 0;
    } else {
        while (N > 0) {
            N /= 10;
            nc++;
        }
    }
    cout<<"Number of digits: "<<nc<<endl;
    return 0;
}
