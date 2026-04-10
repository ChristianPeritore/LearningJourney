#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int main_choice;
	char choice_2d;
	int choice_3d;
	float side, area, perimeter, base, height, radius, circumference, side1, side2, side3;
	double volume, l, r_3d, h_3d, b_3d, depth;
	const float PI = 3.14159;
	cout << "Welcome to the Geometry Calculator!" << endl;
	do {
		cout << "\n===============================" << endl;
		cout << "MAIN MENU" << endl;
		cout << "1. 2D Geometry (Area & Perimeter)" << endl;
		cout << "2. 3D Geometry (Volume)" << endl;
		cout << "3. Exit" << endl;
		cout << "Selection: ";
		cin >> main_choice;
		if (main_choice == 1) {
			cout << "\n--- 2D GEOMETRY ---" << endl;
			cout << "s: Square | r: Rectangle | t: Triangle | c: Circle | b: Back to Main Menu" << endl;
			cout << "Selection: ";
			cin >> choice_2d;
			switch (choice_2d) {
			case 's':
				cout << "Enter the side: ";
				cin >> side;
				if (side <= 0) cout << "Error: Value must be > 0." << endl;
				else {
					area = pow(side, 2);
					perimeter = side * 4;
					cout << "Area: " << area << "\nPerimeter: " << perimeter << endl;
				}
				break;
			case 'r':
				cout << "Enter base and height: ";
				cin >> base >> height;
				if (base <= 0 || height <= 0) cout << "Error: Values must be > 0." << endl;
				else {
					area = base * height;
					perimeter = 2 * (base + height);
					cout << "Area: " << area << "\nPerimeter: " << perimeter << endl;
				}
				break;
			case 't':
				cout << "Enter base and height for area: ";
				cin >> base >> height;
				if (base <= 0 || height <= 0) cout << "Error: Values must be > 0." << endl;
				else {
					area = (base * height) / 2;
					cout << "Enter the 3 sides for perimeter: ";
					cin >> side1 >> side2 >> side3;
					perimeter = side1 + side2 + side3;
					cout << "Area: " << area << "\nPerimeter: " << perimeter << endl;
				}
				break;
			case 'c':
				cout << "Enter the radius: ";
				cin >> radius;
				if (radius <= 0) cout << "Error: Value must be > 0." << endl;
				else {
					area = PI * pow(radius, 2);
					circumference = 2 * PI * radius;
					cout << "Area: " << area << "\nCircumference: " << circumference << endl;
				}
				break;
			case 'b':
				break;
			default:
				cout << "Invalid selection!" << endl;
			}
		} else if (main_choice == 2) {
			cout << "\n--- 3D GEOMETRY (VOLUME) ---" << endl;
			cout << "1. Cube\n2. Cylinder\n3. Sphere\n4. Rectangular Prism\n5. Back" << endl;
			cout << "Selection: ";
			cin >> choice_3d;
			if (choice_3d >= 1 && choice_3d <= 4) {
				switch (choice_3d) {
				case 1:
					cout << "Enter side: ";
					cin >> l;
					if (l <= 0) cout << "Error!" << endl;
					else volume = pow(l, 3);
					break;
				case 2:
					cout << "Enter radius and height: ";
					cin >> r_3d >> h_3d;
					if (r_3d <= 0 || h_3d <= 0) cout << "Error!" << endl;
					else volume = PI * pow(r_3d, 2) * h_3d;
					break;
				case 3:
					cout << "Enter radius: ";
					cin >> r_3d;
					if (r_3d <= 0) cout << "Error!" << endl;
					else volume = (4.0 / 3.0) * PI * pow(r_3d, 3);
					break;
				case 4:
					cout << "Enter base, depth, and height: ";
					cin >> b_3d >> depth >> h_3d;
					if (b_3d <= 0 || depth <= 0 || h_3d <= 0) cout << "Error!" << endl;
					else volume = b_3d * depth * h_3d;
					break;
				}
				cout << "The volume is: " << volume << endl;
				if (volume > 1000) cout << "Bulky object!" << endl;
				else if (volume < 1) cout << "Microscopic object!" << endl;
			}
		} else if (main_choice != 3) {
			cout << "Invalid choice, please try again." << endl;
		}
	} while (main_choice != 3);
	cout << "Program terminated. Goodbye!" << endl;
	return 0;
}
