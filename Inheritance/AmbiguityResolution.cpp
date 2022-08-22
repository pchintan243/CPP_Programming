#include <iostream>
using namespace std;

// Why we need of this ambiguity resolution?
// Because when we have 2 class and in class we have methods with same name and same parameters then we will inherit both class then which class method will be called?
// At this time ambiguity resolution is mandatory
// In derived class we will create ambiguity resolution

// Note:-
// If we have only one base class and one derived class then in this class same name funtion with parameters there so if we will make object of derived class then automatically ambiguilty resolution is created.
// Derived class method will be call at that time.


class Base1 {
public:
    void greet() {
        cout << "Hello how are you??" << endl;
    }
};

class Base2 {
public:
    void greet() {
        cout << "I am fine..!!" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    // ambiguity resolution
    void greet(){
        Base1::greet();
    }
};

int main()
{
    Base1 b1;
    b1.greet();
    Base2 b2;
    b2.greet();
    Derived d1;
    d1.greet();
    return 0;
}