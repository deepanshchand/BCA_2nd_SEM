//Write a program using an inline function to find the square of a number.
#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    cout << square(5);
    return 0;
}