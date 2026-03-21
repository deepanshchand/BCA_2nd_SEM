#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    cout << "Value of a is : " << *p << endl;
    cout << "Address of a is : " << **q << endl;
    cout << "Value of ptr is : " << p << endl;
    cout << "Address of ptr is : " << *q << endl;

    return 0;
}