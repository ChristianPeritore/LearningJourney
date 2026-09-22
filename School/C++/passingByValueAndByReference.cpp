#include <iostream>
using namespace std;
void changeValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void changeRefernce(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Initiial Values\n"<<endl;
    cout<< "First Number = "<<num1<<", Second Number = "<<num2<<endl;
    changeValue(num1, num2);
    cout<<"\nAfter changeValue (pass-by-value):\n"<<endl;
    cout<<"First Number = "<< num1<<", Second Number = "<<num2<<endl;
    changeRefernce(num1, num2);
    cout<<"\nAfter changeRefernce (pass-by-refernce):\n"<<endl;
    cout<<"First Number = "<<num1<<", Second Number = "<<num2<<endl;
    return 0;
}
