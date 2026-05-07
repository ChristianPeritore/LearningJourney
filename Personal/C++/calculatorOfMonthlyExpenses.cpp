#include <iostream>
using namespace std;
int main () {
	double home[12], food[12], transports[12], freeTime[12], total[12];// I used 12 because I calculate the monthly expenses for every month of the year
	string months[] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};
	for (int i = 0; i < 12; i++) {
		cout<<"Hi, enter how much money did you spend for every category (home, food, transports and free time) for month "<<i + 1<<endl;
		cin>>home[i]>>food[i]>>transports[i]>>freeTime[i];
		while (home[i] < 0  || food[i] < 0 || transports[i] < 0 || freeTime[i] < 0) {
			cout<<"One or more of the categories are less than 0, try again"<<endl;
			cin>>home[i]>>food[i]>>transports[i]>>freeTime[i];
		}
		total[i] = home[i] + food[i] + transports[i] + freeTime[i];
		cout<<"You have spend "<<total[i]<<" EUR this month"<<endl;
		if (total[i] > 1500) {
			cout<<"Attention, total of this month is over the limit"<<endl;
		} else {
			cout<<"Good job, keep doing like these!"<<endl;
		}
	}
	double mostExpensiveMonth = 0.0;
	int index = 0;
	for (int i = 0; i < 12; i++) {
	    if (mostExpensiveMonth < total[i]) {
	        mostExpensiveMonth = total[i];
	        index = i;
	    }
	}
	cout<<"The most expensive month is number "<<months[index]<<endl;
	return 0;
}
