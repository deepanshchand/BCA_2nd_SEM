// Q.2. Write a program using friend function.
#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    // Function to set value
    void setValue(int n)
    {
        num = n;
    }

    // Friend function declaration
    friend void showNumber(Number n);
};

// Friend function definition
void showNumber(Number n)
{
    cout << "Number is: " << n.num << endl;
}

int main()
{
    Number obj;
    obj.setValue(10);

    // Calling friend function
    showNumber(obj);

    return 0;
}