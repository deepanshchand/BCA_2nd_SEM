#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter index : ";
    cin >> i;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calculation Address;
    int Address = 1000 + (i * 4);
    cout << "Address of " << i << " is : " << Address;
    return 0;
}