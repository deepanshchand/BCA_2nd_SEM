#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    cout << "Value of a is : " << a << endl;
    cout << "Address of a is : " << &a << endl;
    cout << "Address of a is : " << *(&a) << endl; // dereference operator

    return 0;
}