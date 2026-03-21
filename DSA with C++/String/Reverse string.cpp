#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Hello";
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}