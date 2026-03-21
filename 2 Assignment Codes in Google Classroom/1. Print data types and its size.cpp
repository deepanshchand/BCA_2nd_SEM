/*Write a program to demonstrate different data types in C++ (int, float, double, char, bool) and
print their sizes using sizeof() operator.*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.5f;
    double c = 5.12345;
    char d = 'A';
    bool e = true;

    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of float: " << sizeof(b) << endl;
    cout << "Size of double: " << sizeof(c) << endl;
    cout << "Size of char: " << sizeof(d) << endl;
    cout << "Size of bool: " << sizeof(e) << endl;

    return 0;
}