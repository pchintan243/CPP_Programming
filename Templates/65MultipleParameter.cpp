#include <iostream>
using namespace std;

// I can use any datatypes using template
// I can make any 2 types with this template
template <class T1, class T2>

class MyClass
{
public:
    T1 data1;
    T2 data2;
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Data1: " << this->data1 << endl
             << "Data2: " << this->data2 << endl;
    }
};

int main()
{
    // I make any datatype using template. I don't need to make another class for another datatypes.
    // MyClass<float, char> obj(1.3, 'c');
    MyClass<int, char> obj(1, 'c');
    obj.display();

    return 0;
}