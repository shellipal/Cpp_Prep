#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int divisor, divident, quotient, Reminder;

    cout << "Enter divident : ";
    cin >> divident;
    cout << "Enter divisor : ";
    cin >> divisor;

    quotient = divident / divisor;
    Reminder = divident % divisor;

    cout << "Quptient is : " << quotient << endl;
    cout << "Reminder is : " << Reminder << endl;

    return 0;
}