#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;

    cout << "Eenter a ";
    cin >> a;
    cout << "Eenter b ";
    cin >> b;

    cout << sum(a, b)<<endl;
    cout << sub(a, b)<<endl;
    cout << mult(a, b)<<endl;
    cout << division(a, b);
}