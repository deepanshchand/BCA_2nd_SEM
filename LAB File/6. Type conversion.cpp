// Q.6. Type conversion.
#include <iostream>
using namespace std;
int main()
{
    // Explicit type casting
    float x = 5.6;
    cout << "Before conversion x : " << x << endl;
    cout << "After explicit conversion x : " << (int)x << endl;

    // Implicit type casting
    int y = 5;
    float z = y;
    cout << "Implicit conversion z : " <<(float)z << endl;
    return 0;
}