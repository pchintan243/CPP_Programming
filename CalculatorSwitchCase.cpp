#include <iostream>
using namespace std;
class arithmetic
{

public:
    float num1, num2;
    float result;
    char function;
    void getvalue();
    void perform();
};
void arithmetic::getvalue()
{

    cout << "Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter the second number : " << endl;
    cin >> num2;
    cout << "Enter the arithmetic function which you want to perform : " << endl;
    cin >> function;
}
void arithmetic::perform()
{
    switch (function)
    {

    case '+':
        result = num1 + num2;
        cout << "Your two number sum is : " << endl;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Your two number sum is : " << endl;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Your two number sum is : " << endl;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        result = num1 / num2;
        cout << "Your two number sum is : " << endl;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
    default:
        cout << "Please enter the correct arithmetic fuction. " << endl;
    }
}
int main()
{
    arithmetic get;
    get.getvalue();

    get.perform();
    return 0;
}