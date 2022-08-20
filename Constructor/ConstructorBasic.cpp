#include <iostream>
using namespace std;

/* 
It has no return types 
It should be always public
It names same name as a class name
It will automatically called when you will create an object of class
If you create 2 object of class then the constructor is called 2 times

You can not create 2 constructor with same number of parameter with same datatypes....
solution-->If in any situation you will call constructor more than 1 times with same numbers of parameter then you will create new object
*/

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

// Another way to call function of class function
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