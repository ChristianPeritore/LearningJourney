#include <iostream>
using namespace std;
int main () {
    float i, r, p, v;
    string val;
    cout<<"Enter two values from V (voltage), I (current), R (resistance)"<<endl;
    cin>>val;
    if (val=="vi" or val=="VI" or val=="iv" or val=="IV") {
        cout<<"Enter voltage and current"<<endl;
        cin>>v>>i;
        r = v / i;
    } else if (val=="vr" or val=="VR" or val=="rv" or val=="RV") {
        cout<<"Enter voltage and resistance"<<endl;
        cin>>v>>r;
        i = v / r; 
    } else if (val=="ri" or val=="RI" or val=="ir" or val=="IR") {
        cout<<"Enter resistance and current"<<endl;
        cin>>r>>i;
        v = r * i;
    }
    p = v * i;
    cout<<"Voltage: "<<v<<"\nCurrent: "<<i<<"\nResistance: "<<r<<"\nPower: "<<p<<endl;
    return 0;
}
