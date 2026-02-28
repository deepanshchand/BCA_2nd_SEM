#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print numbers
        for (int j = 0; j < n - i; j++)
        {
            cout << char('A' + i);
        }

        cout << endl;
    }

    return 0;
}
