#include <iostream>
using namespace std;

class SimpleCalculator
{
protected:
    int num1;
    int num2;
    char choice;

public:
    void setNumber(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void setChoice()
    {
        cout << "Enter the choice which you want to perform: " << endl;
        cin >> choice;
    }
    void performOperation()
    {
        switch (choice)
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
        }
    }
};

int main()
{
    SimpleCalculator s1;
    s1.setNumber(12, 23);
    s1.setChoice();
    s1.performOperation();
    return 0;
}