#include <iostream>
using namespace std;

float funcAverage1(int a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}

float funcAverage2(float a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage1(2, 4);
    cout << "The average is: " << a << endl;

    float b;
    b = funcAverage2(2.3, 4);
    cout << "The average is: " << b << endl;

    // This object is for template function
    // If i need two integer number average or two floatiing number average or one float and one integer number average then i don't make function for all cases.
    // template solve this problem

    float c;
    c = funcAverage2(2.3, 4);
    cout << "The average is: " << c << endl
         << endl;

    // swap two number using template
    int x = 9, y = 2;
    swapp(x, y);
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    return 0;
}