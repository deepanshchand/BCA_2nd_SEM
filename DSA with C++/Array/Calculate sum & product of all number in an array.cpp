#include <iostream>
using namespace std;

void SumAndProduct(int arr[], int size)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of all num in an array is : " << sum << endl;
    cout << "Product of all num in an array is : " << product << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    SumAndProduct(arr, size);

    return 0;
}