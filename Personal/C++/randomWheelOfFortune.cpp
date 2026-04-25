#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	int n;
	int random = 0;
	cout<<"-----RANDOM WHEEL OF FORTUNE-----"<<endl;
	cout<<"Hi, enter the number of elements you want"<<endl;
	cin>>n;
	while(n <= 0) {
		cout<<"Error: number below or equal to 0. Try again"<<endl;
		cin>>n;
	}
	srand(time(0));
	cout<<"What type of elements do you want? (i / I = int, d / D = double, s / S = string, c / C = char)"<<endl;
	char t;
	cin>>t;
	if (t == 'i' || t == 'I') {
		int elements[n];
		for (int i = 0; i < n; i++) {
			cout<<"Enter the element "<<i + 1<<endl;
			cin>>elements[i];
		}
		random = rand() % n;
		cout<<"The random element is "<<elements[random]<<endl;
	} else if (t == 'd' || t == 'D') {
		double elements[n];
		for (int i = 0; i < n; i++) {
			cout<<"Enter the element "<<i + 1<<endl;
			cin>>elements[i];
		}
		random = rand() % n;
		cout<<"The random element is "<<elements[random]<<endl;
	} else if (t == 's' || t == 'S') {
		string elements[n];
		for (int i = 0; i < n; i++) {
			cout<<"Enter the element "<<i + 1<<endl;
			cin>>elements[i];
		}
		random = rand() % n;
		cout<<"The random element is "<<elements[random]<<endl;
	} else if (t == 'c' || t == 'C') {
	    char elements[n];
		for (int i = 0; i < n; i++) {
			cout<<"Enter the element "<<i + 1<<endl;
			cin>>elements[i];
		}
		random = rand() % n;
		cout<<"The random element is "<<elements[random]<<endl;
	}
	return 0;
}
