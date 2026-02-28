#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size)
{
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main()
{
    int arr[] = {4, 2, 9, 1, 5};
    int size = 5;

    swapMinMax(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}