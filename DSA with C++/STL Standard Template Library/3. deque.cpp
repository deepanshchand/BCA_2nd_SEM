#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {2, 3};

    d.push_front(1);
    d.push_back(4);

    for (int x : d)
        cout << x << " ";
}