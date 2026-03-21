#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 6, 4, 1};

    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array : " << endl;
    for (int val : arr)
    {
        cout << val<<" ";
    }
    return 0;
}