#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> arr = {4, 2, 7, 8, 1, 2, 5};

    reverseArray(arr);
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}