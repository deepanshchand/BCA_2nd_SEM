// Write a program demonstrating assignment operators (=, +=, -=, *=, /=).

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "\nEnter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // = operator
    temp = a;
    temp = b;
    cout << "\nAfter a = b, a = " << temp << endl;

    // += operator
    temp = a;
    temp += b;
    cout << "After a += b, a = " << temp << endl;

    // -= operator
    temp = a;
    temp -= b;
    cout << "After a -= b, a = " << temp << endl;

    // *= operator
    temp = a;
    temp *= b;
    cout << "After a *= b, a = " << temp << endl;

    // /= operator
    temp = a;
    temp /= b;
    cout << "After a /= b, a = " << temp << endl;

    return 0;
}
