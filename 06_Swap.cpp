#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;
    cout << "Before swapping : " << "a = " << a << " " << "b = " << b << endl;

    // using temprary variable........

    // temp = a;
    // a = b;
    // b = temp;

    // without using temp. variable........

    a = a + b; // a = 15
    b = a - b; // total - b(10) = a , b = 5
    a = a - b; // total - b(5) = a , a = 10

    cout << "After swapping : " << "a = " << a << " " << "b = " << b << endl;
    return 0;
}