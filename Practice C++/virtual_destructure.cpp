#include <iostream>
using namespace std;

class base
{

public:
    base()
    {
        cout << "Base Constructor\n";
    }

    virtual ~base()
    {
        cout << "Base Destructor\n";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "Derived Constructore\n";
    }
    ~derived()
    {
        cout << "Derived Destructore\n";
    }
};
int main()
{
    base *baseptc = new derived();
    delete baseptc;

    return 0;
}
