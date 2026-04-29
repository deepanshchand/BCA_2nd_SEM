#include <iostream>
using namespace std;
class A_Base
{
public:
    virtual void sum()
    {
        cout << "This is Base function" << endl;
    }
};

class B_Derived : public A_Base
{
public:
    void sum()
    {
        cout << "This is Derived function" << endl;
    }
};

int main()
{
    A_Base *b;
    B_Derived d;
    b = &d;
    b->sum();
    return 0;
}