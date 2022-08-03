#include <iostream>
using namespace std;
class real
{

    int a, b, sum;
    public :
    void getNumber()
    {

        cout << "Your two number is " << a << " + " << b << "i" << endl;
    }
    real(int , int);
};
real :: real(int x, int y)
{
    a=x;
    b=y;
}
int main()
{
    // Implicit call
    real a(5,6);
    a.getNumber();

    real b = real(4,9);
    b.getNumber();
    return 0;
}