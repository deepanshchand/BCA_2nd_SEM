#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++)
    {

        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= (n - i) * 2; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = 1; i <= n; i++)
    {

        // Left stars
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= (i - 1) * 2; j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
