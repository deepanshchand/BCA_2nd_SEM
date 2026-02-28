#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    // Upper Half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}