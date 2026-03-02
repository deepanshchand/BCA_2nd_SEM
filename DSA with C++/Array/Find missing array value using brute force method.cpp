#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = 8;
    
    cout << "\nMissing: ";

    // Step 2: Finding missing
    for (int num = 1; num <= n; num++)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                found = true;
                break;
            }
        }

        if (!found)
            cout << num << " ";
    }

    return 0;
}