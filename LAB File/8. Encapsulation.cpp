#include <iostream>
using namespace std;

class Student
{
private:
    int marks; // hidden data

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void getMarks()
    {
        cout << "Marks: " << marks;
    }
};

int main()
{
    Student s;
    s.setMarks(90);
    s.getMarks();
    return 0;
}