#include <iostream>
using namespace std;

template <class T>

class Chintan
{
public:
    T data;
    Chintan(T a)
    {
        data = a;
    }
    void display();
};

template <class T>

void Chintan<T>::display()
{
    cout << "The value of data is: " << data << endl;
}

void func(int a)
{
    cout << "The value of a is: " << a << endl;
}

template <class T>

void func(T a)
{
    cout << "In templatized function the value of a is: " << a << endl;
}
int main()
{
    Chintan<int> obj(4);
    obj.display();
    cout << endl;

    // Exact match the highest priority --> It means which types of data you pass in the main function and exact same datatypes you given in function parameters then it will run
    // But exact same data types are not there then run function which has make same like data value
    func(10);

    // If i pass the float value then template function run because no one function is there which has take float datatype as a parameter
    func(10.2);
    return 0;
}