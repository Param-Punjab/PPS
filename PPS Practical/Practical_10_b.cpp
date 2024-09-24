//Two numbers are input through the keyboard. Write a program to interchange(swap) the content of 2 numbers without using third variable.

#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;

	cout << endl << "Value of a = " << a << ", b = " << b << endl;

	a = a+b;
	b = a-b;
	a = a-b;

	cout << "After swaping a = " << a << ", b = " << b << endl;

	cout << endl << "Name: Paramveer Singh" << endl << "Roll Number: 2415209" << endl;

	return 0;
}
