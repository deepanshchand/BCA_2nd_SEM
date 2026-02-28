#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)   // directly 5 rows
    {
        // spaces
        for(int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        // stars
        for(int k = 1; k <= 2*i - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}