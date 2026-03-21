/*Write a program to show the use of increment and decrement operators (pre and post).*/
#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    cout << "Pre Increment: " << ++a << endl;
    cout << "Post Increment: " << a++ << endl;
    cout << "After Post Increment: " << a << endl<<endl;

    cout << "Pre Decrement: " << --a << endl;
    cout << "Post Decrement: " << a-- << endl;
    cout << "After Post Decrement: " << a << endl;

    return 0;
}