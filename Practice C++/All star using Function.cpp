#include <iostream>
using namespace std;
void st1()
{
    for (int i = 1; i <= 5; i++) // lines
    {
        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }
        cout << endl;
    }
}
void st2()
{
    for (int i = 5; i >= 1; i--) // lines
    {
        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }
        cout << endl;
    }
}
void st3()
{
    for (int i = 1; i <= 5; i++) // lines
    {
        for (int k = 4; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // stars
        {

            cout << "*";
        }
        cout << endl;
    }
}
void st4()
{
    for (int i = 1; i <= 5; i++) // lines
    {
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 5; j >= i; j--) // stars
        {

            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    st1();
    st2();
    st3();
    st4();
    return 0;
}
