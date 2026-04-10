// Project Work by Christian Peritore, Flavio Lanzafame and Wassim Marfoq //
#include <iostream>
#include <string>
using namespace std;
int main() {
	// --- VARIABLE DECLARATION ---
	// Variables to store data for 5 tracks (title, artist, duration, year, streams)
	string titolo1 = " ", titolo2 = " ", titolo3 = " ", titolo4 = " ", titolo5 = " ";
	string artista1, artista2, artista3, artista4, artista5;
	string temp_disp, cerca;
	int durata1 = 0, durata2 = 0, durata3 = 0, durata4 = 0, durata5 = 0;
	int anno1, anno2, anno3, anno4, anno5;
	int stream1 = 0, stream2 = 0, stream3 = 0, stream4 = 0, stream5 = 0;
	// Management variables: track counter, choices and playlist duration
	int numeroBrani = 0, scelta = 0, durataTotale = 0, bScelto = 0;
	// Boolean variables for track availability
	bool disponibile1 = false, disponibile2 = false, disponibile3 = false, disponibile4 = false, disponibile5 = false, branoTrovato = false;
	do {
		// Main menu shown to the user
		cout << "\n------ MUSICALLY SERVICE ------" << endl;
		cout << "1. Add track to playlist" << endl;
		cout << "2. Play playlist" << endl;
		cout << "3. Search track by title" << endl;
		cout << "4. Edit track availability" << endl;
		cout << "5. Playlist statistics" << endl;
		cout << "6. Delete last track" << endl;
		cout << "7. Exit" << endl;
		// Block for option choice with error control (Input Validation)
		do {
			cout << "\nChoose an option: ";
			if (!(cin >> scelta) || scelta < 1 || scelta > 7) {
				cout << "Error: invalid option." << endl;
				cin.clear();  // Clears the error state of the input buffer
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Removes remaining characters in the buffer
				scelta = 0;
			}
		} while (scelta < 1 || scelta > 7);
		// --- OPTION MANAGEMENT VIA SWITCH ---
		switch (scelta) {
		case 1: // Add track to playlist
			if (numeroBrani >= 5) {
				cout << "Error: playlist full." << endl;
			} else {
				// Sub-switch to assign data to the correct variable (from 1 to 5)
				switch (numeroBrani) {
				case 0:
					cout << "\n--- Track 1 ---" << endl;
					// Buffer cleaning before getline to avoid skipping input
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Title: ";
					getline(cin, titolo1);
					cout << "Artist: ";
					getline(cin, artista1);
					// Validation of entered duration (must be between 30 and 600 seconds)
					do {
						durata1 = 0;
						cout << "Duration (30-600 s): ";
						cin >> durata1;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					} while (durata1 < 30 || durata1 > 600);
					do {
						cout << "Available (yes/no): ";
						getline(cin, temp_disp);
					} while (temp_disp != "yes" && temp_disp != "no");
					disponibile1 = (temp_disp == "yes");
					// Year check: if available it must be in the past, otherwise in the future
					if (disponibile1) {
						do {
							anno1 = 0;
							cout << "Release year: ";
							cin >> anno1;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno1 < 1700 || anno1 > 2026);
					} else {
						do {
							anno1 = 0;
							cout << "Expected release year: ";
							cin >> anno1;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno1 < 2026);
					}
					break;
				case 1:
					cout << "\n--- Track 2 ---" << endl;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Title: ";
					getline(cin, titolo2);
					cout << "Artist: ";
					getline(cin, artista2);
					do {
						durata2 = 0;
						cout << "Duration (30-600 s): ";
						cin >> durata2;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					} while (durata2 < 30 || durata2 > 600);
					do {
						cout << "Available (yes/no): ";
						getline(cin, temp_disp);
					} while (temp_disp != "yes" && temp_disp != "no");
					disponibile2 = (temp_disp == "yes");
					if (disponibile2) {
						do {
							anno2 = 0;
							cout << "Release year: ";
							cin >> anno2;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno2 < 1700 || anno2 > 2026);
					} else {
						do {
							anno2 = 0;
							cout << "Expected release year: ";
							cin >> anno2;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno2 < 2026);
					}
					break;
				case 2:
					cout << "\n--- Track 3 ---" << endl;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Title: ";
					getline(cin, titolo3);
					cout << "Artist: ";
					getline(cin, artista3);
					do {
						durata3 = 0;
						cout << "Duration (30-600 s): ";
						cin >> durata3;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					} while (durata3 < 30 || durata3 > 600);
					do {
						cout << "Available (yes/no): ";
						getline(cin, temp_disp);
					} while (temp_disp != "yes" && temp_disp != "no");
					disponibile3 = (temp_disp == "yes");
					if (disponibile3) {
						do {
							anno3 = 0;
							cout << "Release year: ";
							cin >> anno3;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno3 < 1700 || anno3 > 2026);
					} else {
						do {
							anno3 = 0;
							cout << "Expected release year: ";
							cin >> anno3;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno3 < 2026);
					}
					break;
				case 3:
					cout << "\n--- Track 4 ---" << endl;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Title: ";
					getline(cin, titolo4);
					cout << "Artist: ";
					getline(cin, artista4);
					do {
						durata4 = 0;
						cout << "Duration (30-600 s): ";
						cin >> durata4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					} while (durata4 < 30 || durata4 > 600);
					do {
						cout << "Available (yes/no): ";
						getline(cin, temp_disp);
					} while (temp_disp != "yes" && temp_disp != "no");
					disponibile4 = (temp_disp == "yes");
					if (disponibile4) {
						do {
							anno4 = 0;
							cout << "Release year: ";
							cin >> anno4;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno4 < 1700 || anno4 > 2026);
					} else {
						do {
							anno4 = 0;
							cout << "Expected release year: ";
							cin >> anno4;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno4 < 2026);
					}
					break;
				case 4:
					cout << "\n--- Track 5 ---" << endl;
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Title: ";
					getline(cin, titolo5);
					cout << "Artist: ";
					getline(cin, artista5);
					do {
						durata5 = 0;
						cout << "Duration (30-600 s): ";
						cin >> durata5;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					} while (durata5 < 30 || durata5 > 600);
					do {
						cout << "Available (yes/no): ";
						getline(cin, temp_disp);
					} while (temp_disp != "yes" && temp_disp != "no");
					disponibile5 = (temp_disp == "yes");
					if (disponibile5) {
						do {
							anno5 = 0;
							cout << "Release year: ";
							cin >> anno5;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno5 < 1700 || anno5 > 2026);
					} else {
						do {
							anno5 = 0;
							cout << "Expected release year: ";
							cin >> anno5;
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
						} while (anno5 < 2026);
					}
					break;
				}
				numeroBrani++; // Increment loaded track counter
				cout << "Track added successfully!" << endl;
			}
			break;
		case 2: // Play playlist
			// Block to show all tracks loaded so far
			if (numeroBrani == 0) {
				cout << "The playlist is empty." << endl;
			} else {
				cout << "\n--- PLAYLIST PLAYBACK ---" << endl;
				if (numeroBrani >= 1) {
					cout << "1. " << titolo1 << " - " << artista1 << " (" << durata1 << " s) ";
					if (disponibile1) {
						cout << "[" << anno1 << "]" << endl;
						stream1++; // Increment stream counter
					} else
						cout << "[Not available. Released in " << anno1 << "]" << endl;
				}
				if (numeroBrani >= 2) {
					cout << "2. " << titolo2 << " - " << artista2 << " (" << durata2 << " s) ";
					if (disponibile2) {
						cout << "[" << anno2 << "]" << endl;
						stream2++;
					} else
						cout << "[Not available. Released in " << anno2 << "]" << endl;
				}
				if (numeroBrani >= 3) {
					cout << "3. " << titolo3 << " - " << artista3 << " (" << durata3 << " s) ";
					if (disponibile3) {
						cout << "[" << anno3 << "]" << endl;
						stream3++;
					} else
						cout << "[Not available. Released in " << anno3 << "]" << endl;
				}
				if (numeroBrani >= 4) {
					cout << "4. " << titolo4 << " - " << artista4 << " (" << durata4 << " s) ";
					if (disponibile4) {
						cout << "[" << anno4 << "]" << endl;
						stream4++;
					} else
						cout << "[Not available. Released in " << anno4 << "]" << endl;
				}
				if (numeroBrani >= 5) {
					cout << "5. " << titolo5 << " - " << artista5 << " (" << durata5 << " s) ";
					if (disponibile5) {
						cout << "[" << anno5 << "]" << endl;
						stream5++;
					} else
						cout << "[Not available. Released in " << anno5 << "]" << endl;
				}
			}
			break;
		case 3: // Search track
			// Block for textual search within the entered titles
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Search track: ";
			getline(cin, cerca);
			/* titoloX.find(cerca) returns the position of the word if found,
			   otherwise returns string::npos */
			if (titolo1.find(cerca) != string::npos)  {
				cout << "Found: " << titolo1 << " " << artista1 << " (" << durata1 << " s) [" << anno1 << "]" << endl;
				branoTrovato = true;
			}
			if (titolo2.find(cerca) != string::npos) {
				cout << "Found: " << titolo2 << " " << artista2 << " (" << durata2 << " s) [" << anno2 << "]" << endl;
				branoTrovato = true;
			}
			if (titolo3.find(cerca) != string::npos) {
				cout << "Found: " << titolo3 << " " << artista3 << " (" << durata3 << " s) [" << anno3 << "]" << endl;
				branoTrovato = true;
			}
			if (titolo4.find(cerca) != string::npos) {
				cout << "Found: " << titolo4 << " " << artista4 << " (" << durata4 << " s) [" << anno4 << "]" << endl;
				branoTrovato = true;
			}
			if (titolo5.find(cerca) != string::npos) {
				cout << "Found: " << titolo5 << " " << artista5 << " (" << durata5 << " s) [" << anno5 << "]" << endl;
				branoTrovato = true;
			}
			if (branoTrovato == false) {
				cout << "Track not found, try again." << endl;
			}
			break;
		case 4: // Edit availability
			// Block to toggle the available/not available state
			if (numeroBrani == 0) {
				cout << "Playlist empty." << endl;
			} else {
				cout << "Enter track number to modify: ";
				cin >> bScelto;
				if (bScelto >= 1 && bScelto <= numeroBrani) {
					switch (bScelto) {
					case 1:
						disponibile1 = !disponibile1;
						break;
					case 2:
						disponibile2 = !disponibile2;
						break;
					case 3:
						disponibile3 = !disponibile3;
						break;
					case 4:
						disponibile4 = !disponibile4;
						break;
					case 5:
						disponibile5 = !disponibile5;
						break;
					}
					cout << "Status updated." << endl;
				} else {
					cout << "Error: Invalid selection." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					bScelto = 0;
				}
			}
			break;
		case 5: // Statistics
			// Total duration calculation by summing values and calculating average
			cout << "\n------ STATISTICS ------\n";
			durataTotale = durata1 + durata2 + durata3 + durata4 + durata5;
			cout << "Tracks in playlist: " << numeroBrani << endl;
			cout << "Total duration: " << durataTotale << " s" << endl;
			if (numeroBrani > 0)
				cout << "Average duration: " << durataTotale / numeroBrani << " s" << endl;
			// Comparison algorithm to determine the track with the most streams
			cout << "Most played track: ";
			if (stream1 > stream2 && stream1 > stream3 && stream1 > stream4 && stream1 > stream5)
				cout << titolo1 << " - " << artista1 << endl;
			else if (stream2 > stream1 && stream2 > stream3 && stream2 > stream4 && stream2 > stream5)
				cout << titolo2 << " - " << artista2 << endl;
			else if (stream3 > stream1 && stream3 > stream2 && stream3 > stream4 && stream3 > stream5)
				cout << titolo3 << " - " << artista3 << endl;
			else if (stream4 > stream1 && stream4 > stream2 && stream4 > stream3 && stream4 > stream5)
				cout << titolo4 << " - " << artista4 << endl;
			else if (stream5 > stream1 && stream5 > stream2 && stream5 > stream3 && stream5 > stream4)
				cout << titolo5 << " - " << artista5 << endl;
			else
				cout << "/" << endl;
			break;
		case 6: // Delete last track
			// Logically removes the last track entered by decrementing the counter
			if (numeroBrani > 0) {
				numeroBrani--;
				cout << "\nLast track removed correctly." << endl;
			} else
				cout << "\nError: the playlist is already empty." << endl;
			break;
		}
	} while (scelta != 7); // Program exit
	cout << "\nThank you for using Musically!" << endl;
	return 0;
}
