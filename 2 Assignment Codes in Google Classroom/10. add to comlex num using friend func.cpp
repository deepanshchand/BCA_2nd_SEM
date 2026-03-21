/*Create a class Complex and add two complex numbers using a friend function.*/

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    friend Complex add(Complex, Complex);

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

Complex add(Complex c1, Complex c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = add(c1, c2);
    c3.display();
    return 0;
}