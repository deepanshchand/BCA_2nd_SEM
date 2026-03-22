#include <iostream>
using namespace std;

struct Number
{
public:
    int value;
    Number(int v)
    {
        value = v;
    }
    // Overload + Operator
    Number operator+(const Number &n)
    {
        return Number(value + n.value);
    }
    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n1(5), n2(10);
    Number n3 = n1 + n2;
    n3.display();
    return 0;
}