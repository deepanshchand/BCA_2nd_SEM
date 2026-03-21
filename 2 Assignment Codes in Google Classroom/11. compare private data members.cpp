//  Create two classes and use a friend function to compare their private data members.
#include <iostream>
using namespace std;

class A;
class B;

class A
{
    int x;
public:
    A(int a) { x = a; }
    friend void compare(A, B);
};

class B
{
    int y;
public:
    B(int b) { y = b; }
    friend void compare(A, B);
};

void compare(A a, B b)
{
    if (a.x > b.y)
        cout << "A is greater";
    else
        cout << "B is greater";
}

int main()
{
    A a(10);
    B b(5);
    compare(a, b);
    return 0;
}