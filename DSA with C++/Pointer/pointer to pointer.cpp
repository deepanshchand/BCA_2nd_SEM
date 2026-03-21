#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;//pointer to pointer
    cout << "Value of a is : " << a << endl;
    cout << "Address of a is : " << &a << endl;
    cout << "Value of ptr is : " << ptr << endl;
    cout << "Address of ptr is : " << &ptr << endl;
    cout << "Value of ptr2 is : " << ptr2 << endl;
    cout << "Address of ptr2 is : " << &ptr2 << endl;
    return 0;
}