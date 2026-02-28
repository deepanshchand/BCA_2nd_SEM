#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++) // lines
    {
        for (int k = 2; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 5; j >= i; j--) // stars
        {

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}