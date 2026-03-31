#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    string player1, player2, player3, player4, semiWinner1, semiWinner2;
    int winnerChoice, mode;
    int points1 = 0, points2 = 0, points3 = 0, points4 = 0, finalPoints1 = 0, finalPoints2 = 0;
    srand(time(0));
    cout << "Tournament Manager" << endl;
    cout << "Select mode (1 = Manual, 2 = Random Simulation): ";
    cin >> mode;
    cout << "Enter name for Player 1: ";
    cin >> player1;
    cout << "Enter name for Player 2: ";
    cin >> player2;
    cout << "Enter name for Player 3: ";
    cin >> player3;
    cout << "Enter name for Player 4: ";
    cin >> player4;
    cout << "\nParticipants: " << player1 << ", " << player2 << ", " << player3 << ", " << player4 << endl;
    cout << "\n--- First Semi-Final: " << player1 << " vs " << player2 << " ---" << endl;
    for (int game = 1; game <= 6; game++) {
        if (mode == 1) {
            cout << "Game " << game << " - Who wins? (1=" << player1 << ", 2=" << player2 << "): ";
            cin >> winnerChoice;
        } else {
            winnerChoice = rand() % 2 + 1;
            cout << "Game " << game << " - Winner: Player " << winnerChoice << endl;
        }
        if (winnerChoice == 1) points1++;
        else points2++;
                cout << "Score: " << points1 << " - " << points2 << endl;
    }
    semiWinner1 = (points1 > points2) ? player1 : player2;
    cout << "Winner: " << semiWinner1 << " (" << points1 << "-" << points2 << ")" << endl;
    cout << "\n--- Second Semi-Final: " << player3 << " vs " << player4 << " ---" << endl;
    for (int game = 1; game <= 6; game++) {
        if (mode == 1) {
            cout << "Game " << game << " - Who wins? (3=" << player3 << ", 4=" << player4 << "): ";
            cin >> winnerChoice;
        } else {
            winnerChoice = rand() % 2 + 3;
            cout << "Game " << game << " - Winner: Player " << winnerChoice << endl;
        }
        if (winnerChoice == 3) points3++;
        else points4++;
        cout << "Score: " << points3 << " - " << points4 << endl;
    }
    semiWinner2 = (points3 > points4) ? player3 : player4;
    cout << "Winner: " << semiWinner2 << " (" << points3 << "-" << points4 << ")" << endl;
    cout << "\n--- Grand Final: " << semiWinner1 << " vs " << semiWinner2 << " ---" << endl;
    for (int game = 1; game <= 6; game++) {
        if (mode == 1) {
            cout << "Game " << game << " - Who wins? (1=" << semiWinner1 << ", 2=" << semiWinner2 << "): ";
            cin >> winnerChoice;
        } else {
            winnerChoice = rand() % 2 + 1;
            cout << "Game " << game << " - Winner: Player " << winnerChoice << endl;
        }
        if (winnerChoice == 1) finalPoints1++;
        else finalPoints2++;
        cout << "Score: " << finalPoints1 << " - " << finalPoints2 << endl;
    }
    cout << "\n==========================" << endl;
    cout << "OVERALL TOURNAMENT WINNER" << endl;
    if (finalPoints1 > finalPoints2) {
        cout << "Tournament Champion: " << semiWinner1 << " (" << finalPoints1 << "-" << finalPoints2 << ")" << endl;
    } else {
        cout << "Tournament Champion: " << semiWinner2 << " (" << finalPoints1 << "-" << finalPoints2 << ")" << endl;
    }
    cout << "==========================" << endl;
    return 0;
}
