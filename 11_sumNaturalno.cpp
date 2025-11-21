#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a positive integer : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}