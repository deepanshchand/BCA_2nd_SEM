#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    // Print Subarray;
    for (size_t st = 0; st < arr.size(); st++)
    {
        int currenSum = 0;
        for (size_t end = st; end < arr.size(); end++)
        {
            currenSum += arr[end];
            maxSum = max(currenSum, maxSum);
        }
    }

    cout << "\nMaximum Subarray is : " << maxSum;
    return 0;
}