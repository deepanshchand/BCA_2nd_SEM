#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {-1, -2, -3, -4, -5};

    int currentSum = 0;
    int maxSum = INT_MIN;

    // Kadane's Algorithm
    for (size_t i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;
    }

    // Print Subarray;
    for (size_t st = 0; st < arr.size(); st++)
    {
        for (size_t end = st; end < arr.size(); end++)
        {
            for (size_t i = st; i <= end; i++)
            {
                cout << arr[i];
                cout << " ";
            }
            cout << " | ";
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum: " << maxSum;

    return 0;
}