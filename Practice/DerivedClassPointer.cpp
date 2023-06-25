#include <iostream>
using namespace std;

class Base
{
public:
    int base;
    void dis()
    {
        cout << "Base" << base << endl;
    }
};

class Derived : public Base
{
public:
    int der;
    void dis()
    {
        cout << "der Base" << base << endl;
        cout << "der" << der << endl;
    }
};

int main()
{
    Base *base_ptr = new Base;
    Base objA;
    Derived objB;

    base_ptr = &objB;
    base_ptr->base = 45;
    base_ptr->dis();

    Derived *derived_ptr = new Derived;
    derived_ptr = &objB;
    derived_ptr->der = 56;
    derived_ptr->dis();
    return 0;
}