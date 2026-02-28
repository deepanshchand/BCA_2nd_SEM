#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 5;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            return 0;
        }
    }
    cout << "You exceed the array...";

    return 0;
}