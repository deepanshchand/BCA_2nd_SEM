#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> A = {4, 5, 6, 7, 0, 1, 2, 3};
    int tar = 0;

    int st = 0, end = A.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (A[mid] == tar)
        {
            cout << mid;
            break;
        }
        if (A[st] <= A[mid])
        {
            if (A[st] <= tar && tar <= A[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (A[mid] <= tar && tar <= A[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return 0;
}
