#include <iostream>
using namespace std;

int main()
{
    int a, c;
    char b;

    cout << "Enter first value : ";
    cin >> a;

    cout << "Enter operator : ";
    cin >> b;

    cout << "Enter second value : ";
    cin >> c;

    switch (b)
    {
    case '+':
        cout << "Addition is : " << a + c;
        break;
    case '-':
        cout << "Substraction is : " << a - c;
        break;
    case '*':
        cout << "Multiplication is : " << a * c;
        break;
    case '/':
        cout << "Division is : " << a / c;
        break;
    }
    return 0;
}