#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    void setData(int a)
    {
        // This pointer
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }

    // passing reference to the function
    A &setData1(int b)
    {
        this->b = b;
        return *this;
    }
    void getData1()
    {
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function

    A a;
    a.setData(4);
    a.getData();
    a.setData1(40).getData1();
    return 0;
}