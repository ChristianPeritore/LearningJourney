#include <iostream>
using namespace std;
int main () {
    double costPerL = 0.0, liters = 0.0, totCost = 0.0;
    cout<<"Hi, enter what you want to find (1 = cost Per Liter, 2 = liters, 3 = total Cost). All prices are in euro."<<endl;
    int choice;
    cin>>choice;
    while (choice < 1 or choice > 3) {
        cout<<"Error, try again"<<endl;
        cin>>choice;
    }
    if (choice == 1) {
        cout<<"Enter the total cost and the total liters"<<endl;
        cin>>totCost>>liters;
        costPerL = totCost / liters;
        cout<<"Cost per liter: "<<costPerL<<" €"<<endl;
    } else if (choice == 2) {
        cout<<"Enter the total cost and the cost per liter"<<endl;
        cin>>totCost>>costPerL;
        liters = totCost / costPerL;
        cout<<"Liters: "<<liters<<" €"<<endl;
    } else {
        cout<<"Enter the cost per liter and the total liters"<<endl;
        cin>>costPerL>>liters;
        totCost = costPerL * liters;
        cout<<"Total cost: "<<totCost<<" €"<<endl;
    }
    return 0;
}
