/*Create a class Employee and demonstrate the working of a destructor by printing a message
when the object is destroyed.*/

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee() { cout << "Constructor called\n"; }
    ~Employee() { cout << "Destructor called\n"; }
};

int main()
{
    Employee e;
    return 0;
}