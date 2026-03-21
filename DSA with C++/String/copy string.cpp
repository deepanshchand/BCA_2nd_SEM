#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[20] = "Hello";
    char str2[20];

    strcpy(str2, str1);

    cout << "Copied string: " << str2;
}