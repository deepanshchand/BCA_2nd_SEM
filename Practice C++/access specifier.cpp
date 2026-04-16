#include <iostream>
using namespace std;
class A
{
protected:
    int x = 100;
};
class B : public A
{
    int y = 101;

public:
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    B d;
    d.display();
    return 0;
}