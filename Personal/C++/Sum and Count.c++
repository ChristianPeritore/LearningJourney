#include <iostream>
using namespace std;
int main () {
    int n = 1, s = 0, totNum = 0;
    do {
        cout<<"Hi, enter a integer"<<endl;
        cin>>n;
        s += n;
        totNum += 1;
        if (n == 0) {
            totNum -= 1;
        }
    } while (n > 0);
    cout<<"The sum is "<<s<<" and there are "<<totNum<<" numbers in total"<<endl;
    return 0;
}
