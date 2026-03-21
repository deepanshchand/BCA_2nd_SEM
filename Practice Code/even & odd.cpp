#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 0; i <= 10; i += 2)
    {
        cout << "Even : " << i << endl;
    }

    for (i = 1; i <= 10; i += 2)
    {
        cout << "Odd : " << i << endl;
    }
    return 0;
}