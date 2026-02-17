// Write a program to demonstrate pre and post increment/decrement operators.
#include <iostream>
using namespace std;

int main()
{
     int a = 10;

     cout << "Initial value = 10\n\n";

     // Pre Increment
     cout << "Pre-increment (++a): " << ++a << endl;
     cout << "Value of a after operation: " << a << endl
          << endl;

     // Post Increment
     cout << "Post-increment (a++): " << a++ << endl;
     cout << "Value of a after operation: " << a << endl
          << endl;

     // Pre Decrement
     cout << "Pre-decrement (--a): " << --a << endl;
     cout << "Value of a after operation: " << a << endl
          << endl;

     // Post Decrement
     cout << "Post-decrement (a--): " << a-- << endl;
     cout << "Value of a after operation: " << a << endl;

     return 0;
}
