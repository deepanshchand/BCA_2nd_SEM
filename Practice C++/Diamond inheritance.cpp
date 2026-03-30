// Hierarichal Inheritance
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
class C : public A
{
public:
    void call()
    {
        cout << "Hello Class C\n";
    }
};
class D : public B, public C
{
public:
    void dam()
    {
        cout << "Hello Class D\n";
    }
};
int main()
{
    B ab;
    C ac;
    D ad;
    ab.display();
    ac.display();
    ad.dam();
}