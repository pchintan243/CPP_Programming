#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "Value of a:" << a << endl;
    cout << "Value of a:" << *(ptr) << endl;
    cout << ptr << endl;
    cout << &a << endl;

    // New keyword
    int *p = new int(40);
    cout << "Value at address p is: " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20; // Anothers way of initialization of an array
    *(arr + 2) = 30;

    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // Delete keyword
    // It was use to free the memory which was we given dynamically with pointer
    int *arrr = new int[3];
    arrr[0] = 10;
    arrr[1] = 20;
    arrr[2] = 30;
    delete[] arrr;
    cout << "The value of arrr[0] is: " << arrr[0] << endl;
    cout << "The value of arrr[1] is: " << arrr[1] << endl;
    cout << "The value of arrr[2] is: " << arrr[2] << endl;

    return 0;
}