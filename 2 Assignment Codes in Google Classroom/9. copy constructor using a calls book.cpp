/*Write a program to demonstrate a copy constructor using a class Book.*/
#include <iostream>
using namespace std;

class Book
{
    int price;

public:
    Book(int p)
    {
        price = p;
    }

    Book(const Book &b)
    {
        price = b.price;
    }

    void display()
    {
        cout << "Price: " << price;
    }
};

int main()
{
    Book b1(500);
    Book b2 = b1;

    b2.display();
    return 0;
}