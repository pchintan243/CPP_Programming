#include <iostream>
using namespace std;

// default class with datatypes
template <class T1 = int, class T2 = float, class T3 = char>
class Chintan
{
public:
    T1 a;
    T2 b;
    T3 c;
    Chintan(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    // If you give empty bracket then it will takes default class which is given in template
    Chintan<> c(3, 3.5, 'c');
    c.display();

    cout << endl;
    // But if you give datatypes when you make an object then it will take this parameter instead of default parameter
    Chintan<float, char, char> d(3.1, 'a', 'c');
    d.display();
    return 0;
}