#include <iostream>
using namespace std;

class y;

//why we give forward declaration of class y?
// Because first of all compiler check class x line by line..
// In class x when friend function will come then compiler see parameter as a y class so it can't understand what is y
// In class x anywhere class y is used then forward declaration is mandatory
// That's why we give forward declaration of class y

class x
{
    int a;

public:
    void set(int n)
    {
        a = n;
    }
    friend void add(x, y);
};
class y
{
    int b;

public:
    void set(int n)
    {
        b = n;
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{

    cout << "Your sum is : " << (o1.a + o2.b) << endl;
}
int main()
{
    x a1;
    a1.set(3);

    y b1;
    b1.set(6);

    add(a1, b1);
    return 0;
}