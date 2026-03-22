// Q.1. Write a program using Class and Constructor.

#include <iostream>
using namespace std;

// Create a class
class Student
{
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Function to display data
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main()
{
    // Creating object and calling constructor
    Student s1("Deepansh", 20);

    // Calling function
    s1.display();

    return 0;
}