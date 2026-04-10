#include <iostream>
using namespace std;
int main () {
    int numbers[20];
    int totNum = 0;
    double average = 0;
    cout<<"Hi, how many numbers do you want to enter?"<<endl;
    cin>>totNum;
    while (totNum < 0 or totNum > 20) {
        cout<<"Error: the number is smaller than 0 / bigger than 20, try again"<<endl;
        cin>>totNum;
    }
    for (int i = 0; i < totNum; i++) {
        cout<<"Enter a number"<<endl;
        cin>>numbers[i];
        average += numbers[i];
    }
    for (int j = 0; j <= totNum; j++) {
        cout<<numbers[j]<<" "<<endl;
    }
    average /= totNum;
    cout<<"\nThe average is "<<average<<endl;
    return 0;
}
