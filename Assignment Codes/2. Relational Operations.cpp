// Write a program to demonstrate relational operators between two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "\nEnter a number: ";
    cin >> a;

    cout << "Enter b number: ";
    cin >> b;

    cout << "\n--- Relational Operators ---\n";

    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " >  " << b << " : " << (a > b) << endl;
    cout << a << " <  " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;

    return 0;
}
