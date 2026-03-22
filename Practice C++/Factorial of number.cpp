#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int fac = 1;

    cout << "Enter n number : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }
    if (n > 20)
    {
        cout << "Number too large! Factorial exceeds long long range.";
        return 0;
    }
    for (int count = 1; count <= n; count++)
    {
        fac *= count;
    }

    cout << "Factorial of " << n << " is : " << fac;

    return 0;
}