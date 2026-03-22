#include <iostream>
using namespace std;
class Add
{
public:
    int a, b;
    Add(int x, int y)
    {
        a = x;
        b = y;
    }
    Add operator+(Add obj)
    {
        Add temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    void display()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    Add obj1(10, 20);
    Add obj2(5, 7);
    Add obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}