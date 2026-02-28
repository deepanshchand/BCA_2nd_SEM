#include <iostream>
using namespace std;

int decToBinary(int i)
{
    int ans = 0, pow = 1;
    while (i > 0)
    {
        int rem = i % 2;
        i /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << decToBinary(n) << endl;
    return 0;
}