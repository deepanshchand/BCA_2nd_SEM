#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    int currentSum = 0;
    int maxSum = INT_MIN;

    int start = 0, end = 0, tempStart = 0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum: " << maxSum << endl;
    cout << "Subarray: ";

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}