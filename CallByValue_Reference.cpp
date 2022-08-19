#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Call by Value
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Call by Reference
void swapVariableReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    cout << "Before The value of a is " << a << "the value of b is " << b << endl;
    swap(a, b); // This will not swap the value of a and b
    cout << "The value of a is " << a << "the value of b is " << b << endl;
    swapPointer(&a, &b); // This is working because we pass address of a and b
    cout << "The value of a is " << a << "the value of b is " << b << endl;
    swapVariableReference(a, b); // This will swap value of a and b
    cout << "The value of a is " << a << "the value of b is " << b << endl;
    return 0;
}