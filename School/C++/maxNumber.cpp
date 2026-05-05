#include <iostream>
using namespace std;
int main () {
    int n = 1, max = 0;
    while (n > 0) {
        cout<<"Enter a number"<<endl;
        cin>>n;
        if (max < n) {
            max = n;
        }
        if (n == 0) {
            break;
        }
    }
    cout<<"The maximum number is "<<max<<endl;
    return 0;
}
