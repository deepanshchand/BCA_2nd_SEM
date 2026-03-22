#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> m;

    m[1] = "A";
    m[2] = "B";

    cout << m[1];
}