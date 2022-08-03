#include <iostream>
using namespace std;
class sum
{
// private member class ni bar use karva mate friend function no use thay 
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
    friend sum sumi(sum i, sum u);
    void get()
    {

        cout << "Your value is : " << a << " + " << b << "i" << endl;
    }
};
sum sumi(sum i, sum u)
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

    q = sumi(o, p);
    q.get();

    return 0;
}