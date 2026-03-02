#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec;
    cout << "Before size = " << vec.size() << endl;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    cout << "After pus_back size = " << vec.size() << endl;

        for (char val : vec)
    {
        cout << val << endl;
    }
    return 0;
}