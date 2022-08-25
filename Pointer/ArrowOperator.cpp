#include <iostream>
using namespace std;

class Hello
{
    int real;
    int imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "Your real part is: " << real << endl;
        cout << "Yourimaginary part is: " << imaginary << endl;
    }
};

int main()
{
    // Using Pointer to initialize class object
    Hello h1;
    Hello *ptr = &h1;
    Hello *p = new Hello; // Another way to make an object
    
    // Both are same -->Give same output
    (*ptr).setData(8, 9);
    (*ptr).getData();

    p->setData(8, 9);
    p->getData();

    return 0;
}