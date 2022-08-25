#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "The value of a is: " << a << endl;
    }
};

class Derived : public Base
{
public:
    int b;
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Base *bptr;
    Base bobj;
    Derived dobj;
    // Pointing Base class pointer to Derived class pointer
    bptr = &dobj;
    bptr->a = 23;
    bptr->display();

    Derived *dptr;
    dptr = &dobj;
    dptr->a = 900;
    dptr->b = 90;
    dptr->display();
    return 0;
}