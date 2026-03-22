#include <iostream>
using namespace std;
class Base
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
    void sum(double a, double b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    Base a1;

    a1.sum(10, 2);
    a1.sum(10.4, 2.5);

    return 0;
}