#include <iostream>
using namespace std;
class A
{
public:
    int c;
    A(int c)
    {
        this->c = c;
    }
};
int main()
{
    A a(5);
    cout << a.c;
    return 0;
}