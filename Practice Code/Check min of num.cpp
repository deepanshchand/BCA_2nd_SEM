#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    // Logic
    if (a < b)
    {
        cout << a << " is min";
    }
    else
    {
        cout << b << " is min";
    }
    return 0;
}