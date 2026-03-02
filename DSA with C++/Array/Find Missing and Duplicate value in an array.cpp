#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = 8;

    cout << "Duplicates: ";

    // Step 1: Marking
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;

        if (arr[index] < 0)
        {
            cout << abs(arr[i]) << " ";
        }
        else
        {
            arr[index] = -arr[index];
        }
    }

    cout << "\nMissing: ";

    // Step 2: Finding missing
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}