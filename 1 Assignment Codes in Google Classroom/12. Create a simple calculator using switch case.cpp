//Write a program to create a simple calculator using switch case.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "\nEnter a : ";
    cin >> a;
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;
    cout << "Enter b : ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Result = " << a + b;
        break;
    case '-':
        cout << "Result = " << a - b;
        break;
    case '*':
        cout << "Result = " << a * b;
        break;
    case '/':
        if (b != 0)
            cout << "Result = " << a / b;
        else
            cout << "Division by zero not allowed";
        break;
    default:
        cout << "Invalid Operator";
    }

    return 0;
}
