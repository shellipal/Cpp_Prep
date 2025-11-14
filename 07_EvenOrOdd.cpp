#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an number : ";
    cin >> number;

    (number % 2 == 0) ? cout << number << " number is even " : cout << number << " number is odd ";
    return 0;
}