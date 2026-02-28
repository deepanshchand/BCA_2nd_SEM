#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    if (n <= 0)
        return false;

    int temp = n;

    // Keep right-shifting temp until it becomes 1
    while ((temp >> 1) > 0)
    {
        if ((temp & 1) != 0) // If LSB is 1 before last shift, not power of 2
            return false;
        temp = temp >> 1;
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOf2(n))
        cout << n << " is a power of 2";
    else
        cout << n << " is NOT a power of 2";

    return 0;
}