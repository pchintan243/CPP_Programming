#include <iostream>
using namespace std;

// why we use a template?
// Define only one class and it can be automatically generate all class while code is running
// It is use in this program as a multiply the float numbers
// If number is integer then you can make another class for multiply integer
// If number is float then you can make another class for multiply integer
// template follows DRY principal codes
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 2.1;
    v1.arr[1] = 1.2;
    v1.arr[2] = 4.1;

    Vector<float> v2(3);
    v2.arr[0] = 6.1;
    v2.arr[1] = 8.1;
    v2.arr[2] = 1.7;

    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}