// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[] = {99, 11, 21, 33, 46, 55, 67, 77, 88};
//     int arr2[] = {99, 67, 3, 4, 5, 6, 6, 5, 5};

//     int size = 9;

//     for (int i = 0; i < size; i++)
//     {
//         bool isDuplicate = false;

//         for (int j = 0; j < size; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 isDuplicate = true;
//                 break; // duplicate mil gaya, aage check karne ki zarurat nahi
//             }
//         }

//         if (isDuplicate)
//         {
//             cout << arr1[i] << " ";
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {99, 11, 21, 33, 46, 55, 67, 77, 88, 99};
    int arr2[] = {99, 67, 3, 4, 5, 6, 6, 5, 5};

    int size = 10; // arr1 size

    for (int i = 0; i < size; i++)
    {
        bool isPresentInArr2 = false;
        bool alreadyPrinted = false;

        // 🔹 Check if element exists in arr2
        for (int j = 0; j < 9; j++)
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