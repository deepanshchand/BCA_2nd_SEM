#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;  // same as &arr
    cout << &arr << endl; // same as arr
    cout << *arr << endl; // print 1
    cout << *arr + 1 << endl;
    cout << *arr + 2 << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    return 0;
}