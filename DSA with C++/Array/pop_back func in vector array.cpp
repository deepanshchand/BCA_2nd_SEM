#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec;
    cout << "\nBefore size = " << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }
    vec.push_back('a');
    vec.push_back('b');

    cout << "\nAfter push_back size = " << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }
    vec.pop_back();
    cout << "\nAfter pop_back size = " << vec.size() << endl;
    for (char val : vec)
    {

        cout << val << endl;
    }
    cout << endl;
    return 0;
}