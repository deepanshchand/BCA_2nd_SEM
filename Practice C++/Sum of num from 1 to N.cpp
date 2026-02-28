#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter n number : ";
    cin >> n;

    for (int count = 1; count <= n; count++)
    {
        sum += count;
    }

    cout << sum;

    return 0;
}