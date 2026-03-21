#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 7, 8, 1, 2, 5};
    int target = 5;

    for (size_t i = 0; i < arr.size(); i++)
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