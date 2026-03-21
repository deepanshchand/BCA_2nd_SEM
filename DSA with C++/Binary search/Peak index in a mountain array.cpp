#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> A = {0, 3, 8, 9, 5, 2};

    int st = 1, end = A.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (A[mid - 1] < A[mid])
        { // right
            st = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }
    return 0;
}
