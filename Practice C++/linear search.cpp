#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int size = 10;
    int key;
    cout << "Enter key value : ";
    cin >> key;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            cout << arr[i] << " found";
            break;
        }
        if (i == size)
        {
            cout << "Not found...!!!";
        }
    }

    return 0;
}