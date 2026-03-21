#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {5, 2, 6, 4, 1};
    int delete_index = 2;

    for (int i = delete_index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size = size - 1;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}