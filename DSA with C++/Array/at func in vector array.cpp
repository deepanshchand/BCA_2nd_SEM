#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "at 0 is : ";
    cout << vec.at(0) << endl;
    cout << "at 1 is : ";
    cout << vec.at(1) << endl;

    return 0;
}