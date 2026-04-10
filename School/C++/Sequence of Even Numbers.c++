#include <iostream>
using namespace std;
int main () {
    int n;
    int cont = 1, np = 0;
    cout<<"Enter a positive integer"<<endl;
    cin>>n;
    while (n <= 1) {
        cout<<"Error, try again"<<endl;
        cin>>n;
    }
    for (cont = 1; cont <= n; cont++) {
        if (cont % 2 == 0) {
            np++;
            cout<<cont<<" "<<endl;
            cont++;
        }
    }
    cout<<np;
    return 0;
}
