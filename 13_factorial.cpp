#include <iostream>
using namespace std;

int main()
{
    int n;
    long factorial = 1;

    cout << "Enter a positive integer : ";
    cin >> n;

    if (n < 0)
    {
        cout << "The factorial of negative no. doesn't exist , Enter positive integer.";
    }
    else if (n == 0 || n == 1)
    {
        cout << "Factorial of " << n << " is " << "1" << endl;
    }
    else
    {
        for (int i = 2; i <= n; ++i)
        {
            factorial = factorial * i;
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
    }
    return 0;
}