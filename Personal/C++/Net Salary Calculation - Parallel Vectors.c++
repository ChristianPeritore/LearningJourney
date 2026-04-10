#include <iostream>
using namespace std;
int main() {
    string name[3];
    int hoursWorked[3], children[3];
    double grossSalary[3], inps[3], taxableIncome[3], irpef[3], netSalary[3];
    cout << "Welcome to MacGrove SpA" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter name " << i + 1 << endl;
        cin >> name[i];
        cout << "Enter the hours worked in a month" << endl;
        cin >> hoursWorked[i];
        cout << "How many children?" << endl;
        cin >> children[i];
    }
    for (int i = 0; i < 3; i++) {
        grossSalary[i] = hoursWorked[i] * 12.50;
        grossSalary[i] += children[i] * 57.00;
        inps[i] = grossSalary[i] * 0.1260;
        taxableIncome[i] = grossSalary[i] - inps[i];
        if (taxableIncome[i] < 1000.0) {
            irpef[i] = taxableIncome[i] * 0.12;
        } else if (taxableIncome[i] <= 1500.0) {
            irpef[i] = taxableIncome[i] * 0.16;
        } else {
            irpef[i] = taxableIncome[i] * 0.23;
        }
        netSalary[i] = taxableIncome[i] - irpef[i];
    }
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << name[i] 
             << " | Hours Worked: " << hoursWorked[i] 
             << " | Children: " << children[i] 
             << " | Net Salary: " << netSalary[i] << " €" << endl;
    }
    return 0;
}
