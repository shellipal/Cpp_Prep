#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a Year : ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " Is a leap year.";
            }
            else
            {
                cout << year << " Not a leap year.";
            }
        }
        else
        {
            cout << year << " Is a leap year.";
        }
    }
    else
    {
        cout << year << " Not a leap year.";
    }

    return 0;
}