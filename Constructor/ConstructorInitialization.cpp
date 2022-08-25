#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) :a(i), b(i + j)
    // Test(int i, int j) :b(j), a(i) // it is possible when you declate in =t b first otherwise it stores garbage value
    // Test(int i, int j) :a(i), b(a + j)
    Test(int i, int j) : a(i), b(j)
    {
        // i value is set to a & j value is set to b
        cout << "You are in constructor..!!" << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}