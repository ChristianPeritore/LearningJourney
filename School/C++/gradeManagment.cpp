#include <iostream>
using namespace std;

void uploadVites(int v[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<"Vote number "<<i+1<<" "<<endl;
		cin>>v[i];
		while (v[i] < 0 || v[i] > 10) {
		    cout<<"Error, try again "<<endl;
		    cin>>v[i];
		}
	}
}

void seeVotes(int v[], int n) {
	cout<<"Votes list "<<endl;
	for (int i = 0; i < n; i++) {
		cout<<"Position number "<<i+1<<": "<<v[i]<<endl;
	}
}

void searchVote(int v[], int n) {
	int x;
	cout<<"Search vote "<<endl;
	cin>>x;
	while (x <= 0 || x > 10) {
	    cout<<"Error, try again "<<endl;
	    cin>>x;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == x) {
			cout<<"Found in postition number "<<i+1<<endl;
			return;
		}
	}
	cout<<"Vote not found "<<endl;
}

int main() {
	int votes[10];
	uploadVites(votes, 10);
	seeVotes(votes, 10);
	searchVote(votes, 10);
	return 0;
}
