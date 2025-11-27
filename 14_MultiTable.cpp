#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Positive integer for Table : ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}