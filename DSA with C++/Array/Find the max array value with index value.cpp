#include <iostream>

using namespace std;
int main()
{
    int num[6] = {54, 64, -500, 14, 67, 55};

    int max = num[0];
    int index = 0;

    for (int i = 0; i < 6; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
    }
    cout << "Max array is : " << max<<endl;
    cout << "Max array index is : " << index;
    return 0;
}