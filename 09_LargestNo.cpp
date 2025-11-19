// largest number among three number...............

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    // cout << "Enter num1 : ";
    // cin >> num1;
    // cout << "Enter num2 : ";
    // cin >> num2;
    // cout << "Enter num3 : ";
    // cin >> num3;

    cout << "Enter three number : ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " Number 1 is largest" << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2 << " Number 2 is largest" << endl;
    }
    else
    {
        cout << num3 << " Number 3 is largest" << endl;
    }
    return 0;
}