// Q.6. Constructor and Destructor.
#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo()
    {
        cout << "Constructor called\n";
    }

    // Destructor
    ~Demo()
    {
        cout << "~Destructor called\n";
    }
};

int main()
{
    Demo obj; // constructor will run here
    return 0; // destructor will run automatically here
}