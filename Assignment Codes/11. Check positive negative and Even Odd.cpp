//Write a program using nested if to check positive/negative and even/odd.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0)
    {
        cout << "Positive ";
        if (num % 2 == 0)
            cout << "and Even";
        else
            cout << "and Odd";
    }
    else
    {
        cout << "Negative ";
        if (num % 2 == 0)
            cout << "and Even";
        else
            cout << "and Odd";
    }

    return 0;
}
