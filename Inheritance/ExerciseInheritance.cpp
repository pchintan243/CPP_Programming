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
    void setNumber(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void setChoice()
    {
        cout << "Enter the choice which you want to perform: " << endl;
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
    void setNumber(int n1, int n2)
    {
        number1 = n1;
        number2 = n2;
    }
    void setChoice()
    {
        cout << "Enter the choice which you want to perform: " << endl;
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
public:
    
    void display() {
        cout << "Your simple calculation result is: " <<  performOperationSimple() << endl;
        cout << "Your scientific calculation result is: " <<  performOperationScientific() << endl;
    }
};

int main()
{
    SimpleCalculator s1;
    s1.setNumber(12, 23);
    s1.setChoice();
    s1.performOperationSimple();

    ScientificCalculator s2;
    s2.setNumber(32, 16);
    s2.setChoice();
    s2.performOperationScientific();
    return 0;
}