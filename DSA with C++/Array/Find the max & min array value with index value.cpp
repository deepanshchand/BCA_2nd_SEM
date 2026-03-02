#include <iostream>

using namespace std;
int main()
{
    int num[6] = {54, 64, -500, 14, 67, 55};

    int max = num[0];
    int min = num[0];
    int index = 0;

    for (int i = 0; i < 6; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            index = i;
        }
        if (num[i] < min)
        {
            min = num[i];
            index = i;
        }
    }
    cout << "Max array is " << max << " and its index value is : " << index << endl;
    cout << "Min array is " << min << " and its index value is : " << index << endl;

    return 0;
}