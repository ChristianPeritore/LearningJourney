#include <iostream>
using namespace std;
int main() {
    string name;
    int birth_year, age, year_at_100;
    cout << "Hello, nice to meet you!" << endl;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Okay " << name << ", now please enter your birth year: " << endl;
    cin >> birth_year;
    while (birth_year < 1900 || birth_year >= 2026) {
        cout << "Invalid birth year. Please try entering another one: " << endl;
        cin >> birth_year;
    }
    age = 2026 - birth_year;
    cout << name << ", you are " << age << " years old." << endl;
    year_at_100 = birth_year + 100;
    cout << "You will turn 100 years old in the year " << year_at_100 << "." << endl;
    return 0;
}
