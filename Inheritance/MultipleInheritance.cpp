#include <iostream>
using namespace std;

class Student1
{
protected:
    int data1;

public:
    void setData1(int d1)
    {
        data1 = d1;
    }
};
class Student2
{
protected:
    int data2;

public:
    void setData2(int d2)
    {
        data2 = d2;
    }
};

class Main : public Student1, public Student2
{

public:
    void displayValue()
    {
        cout << "The value of data1 is: " << data1 << endl;
        cout << "The value of data2 is: " << data2 << endl;
    }
};

int main()
{
    Main m1;
    m1.setData1(1);
    m1.setData2(2);
    m1.displayValue();
    return 0;
}