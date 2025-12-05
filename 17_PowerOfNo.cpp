#include <iostream>
#include <math.h>
using namespace std;

// power of the number = base ^ exponent.........

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Enter the base and exponent respectively : ";
    cin >> base >> exponent;

    cout << base << " ^ " << exponent << " = ";

    while (exponent != 0)
    {
        result = result * base; // result *= base....
        exponent--;
    }

    cout << result << endl;

    return 0;
}