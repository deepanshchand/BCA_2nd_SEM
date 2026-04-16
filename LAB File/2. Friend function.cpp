// Q.2. Write a program using friend function.

#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A()
    {
        x = 10;
    }

    // Friend function declare
    friend void show(A obj);
};

// Friend function definition
void show(A obj)
{
    cout << "Value of x: " << obj.x; // private access allowed
}

int main()
{
    A obj;
    show(obj);
}