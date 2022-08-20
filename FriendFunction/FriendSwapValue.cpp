#include <iostream>
using namespace std;

class Y;
class X
{
    int val1;

public:
    void getData(int a)
    {
        val1 = a;
    }
    void displayValue()
    {
        cout << "Value: " << val1 << endl;
    }
    friend void swapValue(X &, Y &);
};

class Y
{
    int val2;

public:
    void getData(int b)
    {
        val2 = b;
    }
    void displayValue()
    {
        cout << "Value: " << val2 << endl;
    }
    friend void swapValue(X &, Y &);
};

void swapValue(X &x1, Y &y1)
{
    int temp = x1.val1;
    x1.val1 = y1.val2;
    y1.val2 = temp;
}

int main()
{
    X a1;
    a1.getData(3);

    Y b1;
    b1.getData(30);

    swapValue(a1, b1);

    cout << "Value of a1 is: ";
    a1.displayValue();
    cout << endl;
    cout << "Value of b1 is: ";
    b1.displayValue();
    cout << endl;
    return 0;
}