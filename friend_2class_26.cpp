#include <iostream>
using namespace std;

class y;
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
    x a;
    a.set(3);

    y b;
    b.set(6);

    add(a, b);
    return 0;
}