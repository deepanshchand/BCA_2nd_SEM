#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2, 5, -3, 5, 7};

    unordered_map<int, int> freq;

    // Count frequency
    for (size_t i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    cout << "Unique elements are: ";

    // Print unique elements
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (freq[arr[i]] == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}