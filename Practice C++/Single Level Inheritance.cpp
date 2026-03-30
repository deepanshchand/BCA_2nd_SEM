//Single level Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a = 9;
    void display()
    {
        cout << "Class A\n";
    }
};
class B : public A
{
public:
    void Hello()
    {
        cout << "Class B\n";
    }
};
int main()
{
    B b;
    b.Hello();
    b.display();
    cout << b.a;
}