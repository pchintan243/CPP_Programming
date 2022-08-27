#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    // If function as a virtual then it means if base class pointer pointing to derived class object then run derived class function will be call don't call base class method
    // It will be call derived class method if function as a virtual
    virtual void display()
    {
        cout << "The value of a is in base class: " << a << endl;
    }
};

class Derived : public Base
{
public:
    int b = 78;
    void display()
    {
        cout << "The value of a is in derived class: " << a << endl;
        cout << "The value of b is in derived class: " << b << endl;
    }
};


int main()
{
    Base * bptr;
    Base bobj;
    Derived dobj;

    bptr = &dobj;
    bptr->a = 67;
    bptr->display();
    return 0;
}