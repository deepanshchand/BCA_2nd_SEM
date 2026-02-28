#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 4, 3, 2, 1, 1, 2};
    int size = 8;

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isDuplicate = true;
                break; // duplicate mil gaya, aage check karne ki zarurat nahi
            }
        }

        if (!isDuplicate)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}