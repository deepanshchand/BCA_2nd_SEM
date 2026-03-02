#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {99, 99, 21, 33, 4};
    int arr2[] = {99, 67, 99, 4, 5};

    int size = 5; // arr1 size

    for (int i = 0; i < size; i++)
    {
        bool isPresentInArr2 = false;
        bool alreadyPrinted = false;

        // 🔹 Check if element exists in arr2
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                isPresentInArr2 = true;
                break;
            }
        }

        // 🔹 Check if element already appeared before in arr1
        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        // 🔹 Print only if present in arr2 AND not already printed
        if (isPresentInArr2 && !alreadyPrinted)
        {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}