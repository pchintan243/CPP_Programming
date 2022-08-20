#include <iostream>
using namespace std;
class sum
{
    // It is use for access private member outside the class
    // friend funcion ne public and private bey ma call kaaravi sakay;
    /* friend function no use karva mate always object ni jarur pade and
     direct member ne call na karavi sakay  */
    int a;
    int b;

public:
    void set(int n, int m)
    {
        a = n;
        b = m;
    }
    friend sum print(sum i, sum u);
    void get()
    {

        cout << "Your value is : " << a << " + " << b << "i" << endl;
    }
};
sum print(sum i, sum u)
{
    sum y;
    y.set((i.a + u.a), (i.b + u.b));
    return y;
}
int main()
{
    sum o, p, q;
    o.set(1, 2);
    o.get();

    p.set(4, 5);
    p.get();

    q = print(o, p);
    q.get();

    return 0;
}