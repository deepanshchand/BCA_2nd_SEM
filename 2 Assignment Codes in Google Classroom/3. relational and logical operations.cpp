/*Write a program to demonstrate relational and logical operators in C++*/
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 10;

    // Relational operators
    cout << "Relation operators ans is : \n";
    cout << (a == b) << endl;
    cout << (a != 10) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl
         << endl;

    cout << "Logical operators ans is : \n";
    cout << ((a < b) && (b > 0)) << endl;
    cout << ((a > b) || (b > 0)) << endl;
    cout << (!a) << endl;

    return 0;
}