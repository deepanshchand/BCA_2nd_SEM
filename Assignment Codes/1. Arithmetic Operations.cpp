// Write a C++ program to input two integers and perform all arithmetic operations.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Input
    cout << "\nEnter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "\n--- Arithmetic Operations ---\n\n";

    // Addition
    cout << a << " + " << b << " = " << (a + b) << endl;

    // Subtraction
    cout << a << " - " << b << " = " << (a - b) << endl;

    // Multiplication
    cout << a << " * " << b << " = " << (a * b) << endl;

    // Division
    cout << a << " / " << b << " = " << (a / b) << endl;
    // Reminder
    cout << a << " % " << b << " = " << (a % b) << endl;

    return 0;
}
