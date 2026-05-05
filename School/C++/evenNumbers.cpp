#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Hi, enter the number to calclulate all the even numbers from 1 to n"<<endl;
    cin>>n;
    while (n < 2) {
        cout<<"Error, number can't be less than 2, try again"<<endl;
        cin>>n;
    }
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
