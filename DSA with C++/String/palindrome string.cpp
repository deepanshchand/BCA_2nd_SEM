#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "level";
    int len = strlen(str);
    bool palindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}