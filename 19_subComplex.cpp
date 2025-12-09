#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    complex() : real(0), imag(0) {}

    void input()
    {
        cout << "Enter real and imaginary part respectiely: ";
        cin >> real;
        cin >> imag;
    }

    // operator overloading....
    complex operator-(complex c2)
    {
        complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;

        return temp;
    }

    void output()
    {
        if (imag < 0)
        {
            cout << "output complex number : " << real << imag << "i";
        }
        else
        {
            cout << "output complex number : " << real << "+" << imag << "i";
        }
    }
};

int main()
{
    complex c1, c2, result;
    cout << "Enter first complex number :\n";
    c1.input();
    cout << "Enter second complex number :\n";
    c2.input();

    result = c1 - c2;

    result.output();
    return 0;
}