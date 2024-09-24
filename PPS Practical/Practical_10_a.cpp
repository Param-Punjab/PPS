//Two numbers are input through the keyboard. Write a program to interchange(swap) the content of 2 numbers by using third variable.

#include <iostream>
using namespace std;

int main() {
	
	int a, b, c;

	cout << "Enter value of first number: ";
	cin >> a;

	cout << "Enter value of second number: ";
	cin >> b;

	cout << endl << "a = " << a << ", b = " << b << endl;
	
	c = a;
	a = b;
	b = c;

	cout << "After swaping: a = " << a << ", b = " << b << endl;
	
	cout << endl << "Name: Paramveer Singh" << endl << "Roll Number: 2415209" << endl;
	
	return 0;
}	
