// Swaping two numbers with the help of third variable, Numbers input by the user.
#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Enter value of A: " << endl;
    cin >> A; // For example, A = 10

    cout << "Enter value of B: " << endl;
    cin >> B; // For example, B = 5

    cout << "Before swapping" << endl;
    cout << "A = " << A << endl << "B = " << B << endl;

    // Swapping logic using a third variable
    C = A;  // Store the value of A in C
    A = B;  // Assign the value of B to A
    B = C;  // Assign the value of C (original A) to B

    cout << "After swapping: " << endl;
    cout << "A = " << A << endl << "B = " << B << endl;

    return 0;
}
