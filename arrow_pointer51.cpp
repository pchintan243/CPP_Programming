#include <iostream>
using namespace std;
class Arrow {

    public :
    int a;
    int b;
    void set(int x,int y) {

        a=x;
        b=y;
    }
    void get()
    {

        cout << "Your first number : " << a << endl;
        cout << "Your second number : " << b << endl;
    }
};
int main()
{

    Arrow *ptr = new Arrow;
    ptr->set(5,6);
    ptr->get();
    return 0;
}