// Write a program to perform bitwise AND, OR, and XOR operations.
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "\nEnter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n--- Bitwise Operations ---\n\n";

    // Bitwise AND
    cout << a << " & " << b << " = " << (a & b) << endl;

    // Bitwise OR
    cout << a << " | " << b << " = " << (a | b) << endl;

    // Bitwise XOR
    cout << a << " ^ " << b << " = " << (a ^ b) << endl;

    return 0;
}
