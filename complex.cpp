// Implement complex numbers using operator overloading and type conversion.

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    void input()
    {
        cout << "Enter real part of Complex Number : ";
        cin >> real;
        cout << "Enter imaginary part of Complex Number : ";
        cin >> imag;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        cout << "Output Complex number: " << real << " + " << imag << "i ";
    }
};

int main()
{
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

    result = complex1 + complex2;
    result.output();

    return 0;
}