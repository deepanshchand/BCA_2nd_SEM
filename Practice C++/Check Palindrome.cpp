#include <iostream>
using namespace std;

int main()
{
    int n, original, reverse = 0, digit;

    cout << "Enter number: ";
    cin >> n;

    original = n; // Save original number

    while (n > 0)
    {
        digit = n % 10;                 // Extract last digit
        reverse = reverse * 10 + digit; // Build reverse
        n = n / 10;                     // Remove last digit
    }

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}