
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans = ans ^ nums[i];
    // }

    for (int val : nums)
    {
        ans ^= val;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 4, 2, 1, 2};

    int result = singleNumber(nums);

    cout << "Single number is: " << result;

    return 0;
}
