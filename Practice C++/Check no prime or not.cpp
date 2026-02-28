#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter num : ";
    cin >> num;

    // Logic;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime";
            return 0;
        }
        else
        {
            cout << "Prime";
            return 0;
        }
    }
    return 0;
}