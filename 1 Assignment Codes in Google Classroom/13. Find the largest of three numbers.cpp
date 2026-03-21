//Write a program to find the largest of three numbers.

    #include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\nEnter a : ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a >= b && a >= c)
        cout << "Largest = " << a;
    else if (b >= a && b >= c)
        cout << "Largest = " << b;
    else
        cout << "Largest = " << c;

    return 0;
}
