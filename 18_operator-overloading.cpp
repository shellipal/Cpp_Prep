#include <iostream>
using namespace std;

class check
{
private:
    int i;

public:
    check() : i(1)
    {
    }

    check operator++()
    {
        check temp;
        i++;
        temp.i = i;

        return temp;
    }

    void Display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    check obj, obj1;
    obj.Display();
    obj1.Display();

    obj1 = ++obj;

    obj.Display();
    obj1.Display();

    return 0;
}