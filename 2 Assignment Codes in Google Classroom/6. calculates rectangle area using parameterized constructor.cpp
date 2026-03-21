/* Create a class Rectangle that calculates area using a parameterized constructor.*/
#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        cout << "Area: " << length * width;
    }
};

int main()
{
    Rectangle r(5, 4);
    return 0;
}