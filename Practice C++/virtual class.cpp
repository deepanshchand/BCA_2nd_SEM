#include <iostream>
using namespace std;
class Base
{
public:
    virtual void sum()
    {
        cout << "This is Base function" << endl;
    }
};

class Derived : public Base
{
public:
    void sum()
    {
        cout << "This is Derived function" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->sum();
    return 0;
}