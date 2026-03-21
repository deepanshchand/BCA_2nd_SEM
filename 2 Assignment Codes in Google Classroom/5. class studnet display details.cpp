/*Create a class Student with data members (roll no, name, marks). Use a constructor to initialize
and display the details.*/
#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << roll << " " << name << " " << marks;
    }
};

int main()
{
    Student s(1, "Deepansh", 85);
    s.display();
    return 0;
}