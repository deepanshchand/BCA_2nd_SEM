#include <iostream>
using namespace std;

void name()
{
    string a;
    cout << "\nEnter name : ";
    getline(cin, a);
    cout << a;
}

int main()
{
    name();
    return 0;
}