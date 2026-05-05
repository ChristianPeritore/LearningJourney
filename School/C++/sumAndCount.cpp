#include <iostream>
using namespace std;
int main () {
    int sum = 0, totNum = 0, n = 1;
    while (n > 0) {
        cout<<"Enter a number"<<endl;
        cin>>n;
        if (n == 0) {
            break;
        } else {
            sum += n;
            totNum++;
        }
        
    }
    cout<<"The total sum is "<<sum<<" and the total numbers are "<<totNum<<endl;
    return 0;
}
