#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    cout << "Enter Principal amount : ";
    cin >> p;
    cout << "Enter Rate : ";
    cin >> r;
    cout << "Enter Time : ";
    cin >> t;
    // Calculation;
    float si = (p * r * t) / 100;
    cout << "Simple intrest is : " << si;

    return 0;
}