#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "front value is : ";
    cout << vec.front() << endl;
    cout << "back value is : ";
    cout << vec.back() << endl;

    return 0;
}