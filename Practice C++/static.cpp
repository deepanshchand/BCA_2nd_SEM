#include <iostream>
using namespace std;

void fun()
{
    static int x = 0;
    x++;
    cout << x << endl;
}

int main()
{
    fun(); // 1
    fun(); // 2
    fun(); // 3
}