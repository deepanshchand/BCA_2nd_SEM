//Write a program to find the largest of two numbers using the ternary operator.

#include <iostream>
using namespace std;

int main()
{
    int a, b, largest;

    cout << "\nEnter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Ternary operator
    largest = (a > b) ? a : b;

    cout << "Largest number is: " << largest << endl;

    return 0;
}
