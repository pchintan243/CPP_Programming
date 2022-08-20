#include <iostream>
using namespace std;

class arithmetic
{

public:
    int num1, num2;
};
int main()
{

    arithmetic print;

    cout << "Enter the first number :" << endl;
    cin >> print.num1;
    cout << "Enter the second number :" << endl;
    cin >> print.num2;
    cout << "Your two number sum is :" << print.num1 + print.num2 << endl;
    cout << "Your two number substracion is :" << print.num1 - print.num2 << endl;
    cout << "Your two number multiplication is :" << print.num1 * print.num2 << endl;
    cout << "Your two number division is :" << print.num1 / print.num2 << endl;
    return 0;
}