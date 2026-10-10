#include <iostream>
using namespace std;

double calculateGrossSalary(double hoursWorked, double hourlyRate) {
    return hoursWorked * hourlyRate; }

double calculateSocialSecurityContributions(double grossSalary) {
    return grossSalary * 0.2381; }

double calculateTaxableIncome(double grossSalary, double socialSecurityContributions) {
    return grossSalary - socialSecurityContributions; }

double calculateGrossTax(double taxableIncome) {
    double tax = 0.0;
    if (taxableIncome <= 1154.0) {
        tax = taxableIncome * 0.23; } 
    else if (taxableIncome <= 2154.0) {
        tax = 1154.0 * 0.23 + (taxableIncome - 1154.0) * 0.25; } 
    else {
        tax = 1154.0 * 0.23 + (2154.0 - 1154.0) * 0.25 + (taxableIncome - 2154.0) * 0.35; }
    return tax; }

double calculateWorkDeduction(double taxableIncome) {
    if (taxableIncome <= 1154.0) {
        return 144.0;
    } else if (taxableIncome <= 2154.0) {
        return 105.0;
    } else {
        return 0;
    } }

double calculateChildDeduction(int childrenUnder3, int childrenOver3) {
    return (childrenUnder3 * 220.0) + (childrenOver3 * 150.0); }

double calculateSpouseDeduction(double taxableIncome, bool dependentSpouse) {
    if (dependentSpouse && taxableIncome <= 1154.0) {
        return 67.0;
    }
    return 0; }

double calculateNetTax(double grossTax, double totalDeductions) {
    double netTax = grossTax - totalDeductions;
    return (netTax < 0) ? 0.0 : netTax; }

double calculateNetSalary(double grossSalary, double socialSecurityContributions, double netTax) {
    return grossSalary - socialSecurityContributions - netTax; }

int main() {
    double hoursWorked, hourlyRate;
    int childrenUnder3, childrenOver3;
    char spouseAnswer;
    bool dependentSpouse = false;
    cout << "Hello, we are Bardini & Roversi Accounting Firm" << endl;
    cout << "Please enter the hours worked: " << endl;
    cin >> hoursWorked;
    while (hoursWorked <= 0) {
        cout << "Incorrect input, please try again: " << endl;
        cin >> hoursWorked;
    }
    cout << "Please enter the hourly rate: " << endl;
    cin >> hourlyRate;
    while (hourlyRate <= 0) {
        cout << "Incorrect input, please try again: " << endl;
        cin >> hourlyRate;
    }
    cout << "Please enter the number of children under 3 years old: " << endl;
    cin >> childrenUnder3;
    while (childrenUnder3 < 0) {
        cout << "Incorrect input, please try again: " << endl;
        cin >> childrenUnder3;
    }    
    cout << "Please enter the number of children 3 years old or older: " << endl;
    cin >> childrenOver3;
    while (childrenOver3 < 0) {
        cout << "Incorrect input, please try again: " << endl;
        cin >> childrenOver3;
    }    
    cout << "Do you have a dependent spouse? (Y-y/N-n) " << endl;
    cin >> spouseAnswer;
    while (spouseAnswer != 'Y' && spouseAnswer != 'y' && spouseAnswer != 'N' && spouseAnswer != 'n') {
        cout << "Incorrect input, please try again: " << endl;
        cin >> spouseAnswer;
    }    
    dependentSpouse = (spouseAnswer == 'Y' || spouseAnswer == 'y');    
    double grossSalary = calculateGrossSalary(hoursWorked, hourlyRate);
    double socialSecurity = calculateSocialSecurityContributions(grossSalary);
    double taxableIncome = calculateTaxableIncome(grossSalary, socialSecurity);
    double grossTax = calculateGrossTax(taxableIncome);
    double workDeduction = calculateWorkDeduction(taxableIncome);
    double childDeduction = calculateChildDeduction(childrenUnder3, childrenOver3);
    double spouseDeduction = calculateSpouseDeduction(taxableIncome, dependentSpouse);
    double totalDeductions = workDeduction + childDeduction + spouseDeduction;
    double netTax = calculateNetTax(grossTax, totalDeductions);
    double netSalary = calculateNetSalary(grossSalary, socialSecurity, netTax);    
    cout << "Here is your payslip:" << endl;
    cout << "Gross Salary = " << grossSalary << " €" << endl;
    cout << "Social Security Contributions = " << socialSecurity << " €" << endl;
    cout << "Taxable Income = " << taxableIncome << " €" << endl;
    cout << "Gross Tax (IRPEF) = " << grossTax << " €" << endl;
    cout << "Work Deduction = " << workDeduction << " €" << endl;
    cout << "Child Deduction = " << childDeduction << " €" << endl;
    cout << "Spouse Deduction = " << spouseDeduction << " €" << endl;
    cout << "Total Deductions = " << totalDeductions << " €" << endl;
    cout << "Net Tax = " << netTax << " €" << endl;
    cout << "FINAL NET SALARY = " << netSalary << " €" << endl;
    return 0; 
}
