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
int main()
{
    B ab;
    C ac;
    ab.display();
    ac.display();
}