#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int reminder = 0;
    int reversed_no = 0;

    cout << "Enter a positive integer : ";
    cin >> n;

    while (n != 0)
    {
        reminder = n % 10;
        reversed_no = reversed_no * 10 + reminder;
        n = n / 10;
    }

    cout << "Reverse integer : " << reversed_no << endl;
    return 0;
}