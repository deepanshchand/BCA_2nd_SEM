// Multi level Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a = 9;
    void display()
    {
        cout << "Hello Class A\n";
    }
};
class B : public A
{
public:
    void Hello()
    {
        cout << "Hello Class B\n";
    }
};
class C : public B
{
public:
    void call()
    {
        cout << "Hello Class C\n";
    }
};
int main()
{
    C b;
    b.display();
    b.Hello();
    b.call();
    cout << b.a;
}