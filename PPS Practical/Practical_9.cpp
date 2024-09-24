//Basic salary of john is input through keyboard. His dearness allowance is 40% of basic salary write a program to calculate grass salary.

#include <iostream>
using namespace std;

int main() {

	float basic_salary, dearness_allowance, gross_salary;

	cout << "Enter John's basic salary: ";
	cin >> basic_salary;

	dearness_allowance = 0.40*basic_salary;

	gross_salary = basic_salary+dearness_allowance;

	cout << "Basic Salary: " << basic_salary << endl;
	cout << "Dearness Allowance: " << dearness_allowance << endl;
	cout << "Gross Salary: " << gross_salary << endl;
	cout << endl << "Name: Paramveer Singh" << endl << "Roll Number: 2415209" << endl;

	return 0;
}
