#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int num1;
    int num2;
    char choice1;

public:
    void setNumberSimple(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void setChoiceSimple()
    {
        cout << "Enter the choice which you want to perform:\n1.sum(+)\n2.subtraction(-)\n3.multiplication(*)\n4.division(/)" << endl;
        cin >> choice1;
    }
    void performOperationSimple()
    {
        switch (choice1)
        {
        case '+':
            cout << "Two number sum is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Two number subtraction is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Two number multiplicatiaon is: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Two number divison is: " << num1 / num2 << endl;
            break;
        default:
            cout << "Please enter the valid choice..!!" << endl;
            break;
        }
    }
};
class ScientificCalculator
{
protected:
    int number1;
    int number2;
    char choice2;

public:
    void setNumberScientific(int n1, int n2)
    {
        number1 = n1;
        number2 = n2;
    }
    void setChoiceScientific()
    {
        cout << "Enter the choice which you want to perform:\n1.module(r)\n2.square(p)\n3.squareroot(s)\n4.cube(c)" << endl;
        cin >> choice2;
    }
    void performOperationScientific()
    {
        switch (choice2)
        {
        case 'r':
            cout << "Remainder is: " << number1 % number2 << endl;
            break;
        case 'p':
            cout << "Power of number1 is: " << number1 * number1 << endl;
            cout << "Power of number2 is: " << number2 * number2 << endl;
            break;
        case 's':
            cout << "Power of number1 is: " << float(sqrt(number1)) << endl;
            cout << "Power of number2 is: " << float(sqrt(number2)) << endl;
            break;
        case 'c':
            cout << "Cube of number1 is: " << pow(number1, 3) << endl;
            cout << "Cube of number2 is: " << pow(number2, 3) << endl;
            break;
        default:
            cout << "Please enter the valid choice..!!" << endl;
            break;
        }
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main()
{
    HybridCalculator h1;
    int number1,number2;
    cout << "Enter the first number: "<< endl;
    cin >> number1;
    cout << "Enter the second number: "<< endl;
    cin >> number2;
    h1.setNumberSimple(number1, number2);
    h1.setChoiceSimple();
    h1.performOperationSimple();
    h1.setNumberScientific(number1, number2);
    h1.setChoiceScientific();
    h1.performOperationScientific();
    return 0;
}