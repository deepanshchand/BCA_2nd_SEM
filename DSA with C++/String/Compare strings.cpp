#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "appl";
    char str4[] = "applee";

    cout << strcmp(str1, str2) << endl;
    cout << strcmp(str1, str3) << endl;
    cout << strcmp(str1, str4) << endl;
}