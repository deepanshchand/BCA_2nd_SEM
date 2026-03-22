#include <iostream>
using namespace std;

class student
{

    int marks;

public:
    void setmarks(int n)
    {

        if (n >= 0 && n <= 100)
        {
            marks = n;
        }
        else
        {
            cout << "invalid marks ";
        }
    }
    int getmarks()
    {
        return marks;
    }
};
int main()
{

    student s;
    s.setmarks(85);
    cout << s.getmarks();

    return 0;
}
