/*Create a class Circle and use an inline function inside the class to calculate the area of the
circle*/

#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    inline float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c(5);
    cout << "Area: " << c.area();
    return 0;
}