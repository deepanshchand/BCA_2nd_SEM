#include <iostream>
using namespace std;
class demo
{
public:
    string name = "Deepansh\n"; // class member;
    int a = 7668;
    ;
    demo()
    {
        cout << "Constructor called" << endl;
    }

    string myname() // member function;
    {
        return name;
    }
    int number() // member function;
    {
        return a;
    }
    ~demo()
    {
        cout << "\nDistructor called" << endl;
    }
};
int main()
{
    demo obj;
    cout << "In main function" << endl;
    cout << obj.myname();
    cout << obj.number();
    return 0;
}