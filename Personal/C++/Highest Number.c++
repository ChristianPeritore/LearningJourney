#include <iostream>
using namespace std;
int main () {
	int n = 0, max = 0;
	int a;
	cout<<"Enter the numbers of integers"<<endl;
	cin>>n;
	while (n <= 0) {
		cout<<"Try again, you can't choose to enter 0 or less numbers"<<endl;
		cin>>n;
	}
	for (int i = 0; i < n; i++) {
		cout<<"Enter a integer"<<endl;
		cin>>a;
		if (max < a) {
            max = a;
		}
	}
	cout<<"The highest number is "<<max<<endl;
	return 0;
}
