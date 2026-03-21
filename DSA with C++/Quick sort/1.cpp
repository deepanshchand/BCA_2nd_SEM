#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // pivot = first element
    int p = low + 1;
    int q = high;

    while (p <= q)
    {
        while (arr[p] <= pivot)
            p++;
        while (arr[q] > pivot)
            q--;

        if (p < q)
        {
            swap(arr[p], arr[q]);
        }
    }
    swap(arr[low], arr[q]); // pivot swap
    return q;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pos = partition(arr, low, high);
        quickSort(arr, low, pos - 1);               
        quickSort(arr, pos + 1, high);
    }
}

int main()
{
    int arr[] = {35, 50, 15, 25, 80, 20, 90, 45};
    int n = 8;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}