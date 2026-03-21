/*Write a program to demonstrate constructor overloading in a class Box.*/
#include <iostream>
using namespace std;

class Box
{
    int length;

public:
    Box() { length = 0; }
    Box(int l) { length = l; }

    void display()
    {
        cout << "Length: " << length << endl;
    }
};

int main()
{
    Box b1;
    Box b2(10);

    b1.display();
    b2.display();
    return 0;
}