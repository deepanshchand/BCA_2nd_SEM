#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int size = 10;
    int key;
    cout << "Enter key value : ";
    cin >> key;
    int st = 0;
    int end = size - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (key > arr[mid])
        {
            st = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << mid;
            break;
        }
    }
    return 0;
}