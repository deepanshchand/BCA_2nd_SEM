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
    void hello()
    {
        cout << "Hello Class B\n";
    }
};
class C1 : public B
{
public:
    void call()
    {
        cout << "Hello Class C1\n";
    }
};
class C2 : public B
{
public:
    void dam()
    {
        cout << "Hello Class C2\n";
    }
};
int main()
{

    C1 c1;
    C2 c2;

    c1.call();
    c2.dam();
}