#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived function" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
}