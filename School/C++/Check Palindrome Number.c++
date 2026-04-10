#include <iostream>
using namespace std;
int main () {
    int no, nt;
    int ni = 0;  // to initialize
    cout<<"Enter a positive integer "<<endl;
    cin>>no;
    while (no <= 0) {
        cout<<"Error, try again"<<endl;
        cin>>no;
    }
    nt = no;
    if (no < 10) {
        cout<<"Number less than 10"<<endl;
        return 1;
    }
    while (nt > 0) {  // change from > 10 to > 0
        int c = nt % 10;  // the figure is extracted into a separate variable
        ni = ni * 10 + c;
        nt /= 10;
    }
    if (no == ni) {
        cout<<"The number is palindrome."<<endl;
    } else {
        cout<<"The number is not palindrome."<<endl;
    }
    return 0;
}
