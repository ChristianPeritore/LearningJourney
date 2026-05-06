#include <iostream>
using namespace std;
int main () {
	int steps[28];
	int totSteps = 0, stepsUnderAverage = 0;
	double averageSteps = 0.0;
    for (int i = 0; i < 28; i++) {
        cout<<"Enter steps made in day number "<<i + 1<<endl;
        cin>>steps[i];
        while (i < 0) {
            cout<<"Error, try again"<<endl;
            cin>>steps[i];
        }
        totSteps += steps[i];
    }
    averageSteps = totSteps / 28.0;
    for (int i = 0; i < 28; i++) {
        cout<<"Steps made in day "<<i + 1<<" : "<<steps[i]<<endl;
    }
    cout<<"Total steps: "<<totSteps<<"\nAverage steps per day: "<<averageSteps<<endl;
    for (int i = 0; i < 28; i++) {
        if (i < averageSteps) {
            cout<<"Day "<<i + 1<<" is under the average"<<endl;
            stepsUnderAverage++;
        }
    }
    cout<<"Days with steps under average: "<<stepsUnderAverage<<endl;
	return 0;
}
