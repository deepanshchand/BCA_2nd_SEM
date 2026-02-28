#include <iostream>
using namespace std;
int main()
{
    int n = 12345, a, r;

    r = n % 10;
    n = n / 10;
    a = r;
    cout << a;

    r = n % 10;
    n = n / 10;
    a = r;
    cout << a;

    r = n % 10;
    n = n / 10;
    a = r;
    cout << a;

    r = n % 10;
    n = n / 10;
    a = r;

    cout << a;
    r = n % 10;
    n = n / 10;
    a = r;
    cout << a;

    return 0;
}