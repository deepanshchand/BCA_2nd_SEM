// Write a program to check voting eligibility using logical operators.

#include <iostream>
using namespace std;

int main()
{
    int age;

    // Input
    cout << "Enter your age: ";
    cin >> age;

    // Condition using logical AND (&&)
    if (age >= 0 && age < 18)
    {
        cout << "You are NOT eligible to vote." << endl;
    }
    else if (age < 0)
    {
        cout << "You are NOT eligible to vote." << endl;
    }

    else
    {
        cout << "You are eligible to vote";
    }
    return 0;
}
