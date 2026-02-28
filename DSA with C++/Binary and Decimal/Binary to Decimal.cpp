#include <iostream>
using namespace std;
int binToDecimal(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 10;
        ans += rem * pow;

        decNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int decNum;
    cout << "Enter decNum : ";
    cin >> decNum;

    cout << binToDecimal(decNum) << endl;

    return 0;
}