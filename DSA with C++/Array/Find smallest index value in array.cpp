#include <bits/stdc++.h> // it is use for all type header file in C++
// #include <iostream>
// #include <climits>
using namespace std;
int main()
{
    int num[6] = {54, 64, -400, 14, 24, 55};
    // we can use this sytax instead od INT_MAXwithout help of #include <climits>
    // int smallest = num[0];

    int smallest = INT_MAX; // INT_MAX use with #include <climits>

    for (int i = 0; i < 6; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "Smallest array is : " << smallest;
    return 0;
}