#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double bmi = 0.0, height, totCalories = 0.0, bmr = 0.0, tdee = 0.0; // bmr = Basal Metabolic Rate  | tdee = Total Daily Energy Expenditure
	int weight, age, activityLevel;
	char sex;
	cout<<"THIS PROGRAM IS NOT A MEDICAL DEVICE, THIS DATA ARE ONLY STATISTICS, DO NOT TAKE THIS INFORMATIONS FOR ABSOLUTE TRUTH"<<endl;
	cout<<"Hi, are you a man or a woman?(enter M/m or W/w) "<<endl;
	cin>>sex;
	cout<<"How old are you?"<<endl;
	cin>>age;
	cout<<"Enter your weight in kg and your height in m"<<endl;
	cin>>weight>>height;
	bmi = weight / (pow(height, 2));
	cout<<"Your bmi (Body Mass Index) is "<<bmi<<endl;
	if (bmi < 18.5) {
		cout<<"You are underweight, you should eat more than you consume"<<endl;
	} else if (bmi >= 18.5 && bmi <= 24.9) {
		cout<<"You have a normal weight, you should match the calories gained and the one used"<<endl;
	} else if (bmi >= 25 && bmi <= 29.9) {
		cout<<"You are overweight, you should go in a moderate calore deficit"<<endl;
	} else {
		cout<<"You are obese, you should go in a severe calore deficit"<<endl;
	}
	height *= 100;
	if (sex == 'M' || sex == 'm') {
		bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
	} else if (sex == 'W' || sex == 'w') {
		bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
	}
	cout<<"How many times do you excercise every week?"<<endl;
	cin>>activityLevel;
	if (activityLevel == 0) {
		tdee = bmr * 1.2;
	} else if (activityLevel >= 1 && activityLevel <= 3) {
		tdee = bmr * 1.375;
	} else if (activityLevel >= 4 && activityLevel <= 6) {
		tdee = bmr * 1.55;
	} else if (activityLevel >= 7) {
		tdee = bmr * 1.725;
	}
	if (bmi < 18.5) {
		totCalories = tdee + 400;
	} else if (bmi >= 18.5 && bmi <= 24.9) {
		totCalories = tdee;
	} else if (bmi >= 25 && bmi <= 29.9) {
		totCalories = tdee - 400;
	} else {
		totCalories = tdee - 600;
	}
	cout<<"Your calories' goal is "<<totCalories<<" per day"<<endl;
	cout<<"For more information, ask a doctor"<<endl;
	return 0;
}
