#include <iostream>
using namespace std;
int main () {
	int index;
	string names[n];
	int hoursWorked[n];
	int daysPresent[n];
	int children[n];
	double salary[n];
	double averageSalary = 0.0, maxSalary = 0.0, parents = 0.0;
	char again = 'y';
	cout<<"Hi, enter the number of employees of your company"<<endl;
	cin>>n;
	while (n <= 0) {
		cout<<"ERROR, the number of employees is less than / equal to 0, try again"<<endl;
		cin>>n;
	}
	for (int i = 0; i < n; i++) {
		cout<<"Please, enter your name, the hours worked, the days worked in presence and how many children you have"<<endl;
		cin>>names[i];
		cin>>hoursWorked[i];
		cin>>daysPresent[i];
		cin>>children[i];
	}
	for (int i = 0; i < n; i++) {
		salary[i] = hoursWorked[i] * 11;
		if (daysPresent[i] > 20) {
			salary[i] = salary[i] + (daysPresent[i] - 20) * 5.00;
		}
		salary[i] = salary[i] + (children[i] * 60.00);
		salary[i] = salary[i] - (salary[i] * 0.13);
		if (salary[i] < 1200) {
			salary[i] = salary[i] - (salary[i] * 0.10);
		} else if (salary[i] > 1200 && salary[i] < 1800) {
			salary[i] = salary[i] - (salary[i] * 0.18);
		} else {
			salary[i] = salary[i] - (salary[i] * 0.25);
		}
	}
	for (int i = 0; i < n; i++) {
		cout<<"Employee number "<< i + 1<<": "<<names[i]<<" "<<hoursWorked[i]<<" "<<daysPresent[i]<<" "<<children[i]<<" "<<salary[i]<<endl;
	}
	while (again == 'y' || again == 'Y') {
		cout<<"\nEnter the employee index (1 to "<<n<<"): "<<endl;
		cin>>index;
		if (index < 1 || index > n) {
			cout<<"ERROR, invalid index. Please enter a number between 1 and "<<n<<endl;
		} else {
			int i = index - 1;
			cout<<"Name: "<<names[i]<<endl;
			cout<<"Hours Worked: "<<hoursWorked[i]<<endl;
			cout<<"Days Present: "<<daysPresent[i]<<endl;
			cout<<"Children: "<<children[i]<<endl;
			cout<<"Salary: "<<salary[i]<<endl;
		}
		cout<<"\nDo you want to search for another employee? (y/n): "<<endl;
		cin>>again;
	}
	for (int i = 0; i < n; i++) {
	    averageSalary += salary[i];
	    cout<<"Average salary of the company: "<<averageSalary<<endl;
	}
	averageSalary /= n;
	for (int i = 0; i < n: i++) {
	    if (salary[i] > maxSalary) {
	        maxSalary = salary[i];
	    }
	}
	cout<<"Highest salary: "<<maxSalary<<endl;
	for (int i = 0; i < n; i++) {
	    if (children[i] >= 1) {
	        parents++;
	    }
	}
	cout<<"There are "<<parents<<" employees who have children"<<endl;
	return 0;
}
