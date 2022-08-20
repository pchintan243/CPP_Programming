#include <iostream>
using namespace std;

class Default
{
    int val1;
    int val2;

public:
    // If you give value in main function then it will takes that value
    // But if you will not pass any value in main function then it will takes default value which is given as a parameter
    Default(int a, int b = 8) {
        val1 = a;
        val2 = b;
    }
    void displayValue() {
        cout << "Val1: " << val1 << endl;
        cout << "Val2: " << val2 << endl;
    }
};

int main()
{
    Default d1(12, 122);
    d1.displayValue();

    Default d2(12);
    d2.displayValue();

    return 0;
}