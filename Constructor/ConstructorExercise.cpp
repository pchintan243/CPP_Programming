#include <iostream>
#include <math.h>

using namespace std;

class constructor2;
class constructor1
{
    int n1;
    int n2;

public:
    constructor1()
    {
    }
    constructor1(int num1, int num2)
    {
        n1 = num1;
        n2 = num2;
    }
    friend void mathsFormula(constructor1 c1, constructor2 c2);
};

class constructor2
{
    int m1;
    int m2;

public:
    constructor2()
    {
    }
    constructor2(int num1, int num2)
    {
        m1 = num1;
        m2 = num2;
    }
    friend void mathsFormula(constructor1 c1, constructor2 c2);
};

void mathsFormula(constructor1 c1, constructor2 c2)
{
    int r1 = c2.m1 - c1.n1;
    int r2 = c2.m2 - c1.n2;
    float r = sqrt(pow(r1, 2) + pow(r2, 2));
    cout << "Your distance between two points is: " << r << endl;
}

int main()
{
    constructor1 c1(1, 2);
    constructor2 c2(3, 4);
    mathsFormula(c1, c2);
    return 0;
}