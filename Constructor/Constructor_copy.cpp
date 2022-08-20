#include <iostream>
using namespace std;

class CopyConstructor
{
    int val1;

public:
    CopyConstructor()
    {
        val1 = 0;
    }
    CopyConstructor(int a)
    {
        val1 = a;
    }
    void displayValue()
    {
        cout << "Val1: " << val1 << endl;
    }

    // When no CopyConstructor is found, at that time compiler supplies its own CopyConstructor
    CopyConstructor(CopyConstructor &obj)
    {
        cout << "Copy Constructor is called..!!" << endl;
        val1 = obj.val1;
    }
};

int main()
{
    CopyConstructor c1, c2(8), c3(9);

    c1.displayValue();
    c2.displayValue();
    c3.displayValue();

    CopyConstructor c4(c2);
    c4.displayValue();
    return 0;
}