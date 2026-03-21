#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int currentSum = 0;
    int maxSum = INT_MIN;

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

    cout << "\nMaximum Subarray is : " << maxSum;
    return 0;
}