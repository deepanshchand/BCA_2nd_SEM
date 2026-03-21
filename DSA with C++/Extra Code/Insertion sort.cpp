#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {3, 2, 1, 4, 0, 8};
    int k = 5;
    int size = 6 + 1;

    for (int i = size - 2; i >= k; i--)

    {
        arr[i + 1] = arr[i];
    }
    arr[k] = 7;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}