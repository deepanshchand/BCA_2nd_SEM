#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char optr;
    cout << "Enter 1st num : ";
    cin >> num1;
    cout << "Enter operator : ";
    cin >> optr;
    cout << "Enter 2nd num : ";
    cin >> num2;
    switch (optr)
    {
    case '+':
        cout << "Addition is : " << num1 + num2;
        break;
    case '-':
        cout << "Substraction is : " << num1 - num2;
        break;
    case '*':
        cout << "Multiplication is : " << num1 * num2;
        break;
    case '/':
        cout << "Division is : " << num1 / num2;
        break;
    case '%':
        cout << "Reminder is : " << num1 % num2;
        break;
    }
    return 0;
}