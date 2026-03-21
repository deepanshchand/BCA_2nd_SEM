#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {9, 6, 5, 0, 8, 2, 7, 1, 3};
    int n = 9;

    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            cout << arr[i + 1] << endl;
            i--;
        }

        arr[i + 1] = key;
        cout << arr[i + 1] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}