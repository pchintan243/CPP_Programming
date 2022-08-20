#include <iostream>
using namespace std;

class SimpleInterest
{

    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    // If interest rate r in float value like these 0.04
    SimpleInterest() {}
    SimpleInterest(int p, int y, float r)
    {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }
    // If interest rate r in integer value like these 4
    SimpleInterest(int p, int y, int r)
    {
        principal = p;
        years = y;
        interestRate = (float)r / 100;
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    void displayValue();
};

void SimpleInterest ::displayValue()
{
    cout << "Principal amount was " << principal << ". Return value after " << years << " years is " << returnValue << endl;
}

int main()
{
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p and y:" << endl;
    cin >> p >> y;

    cout << "Enter the interest r in floating number:" << endl;
    cin >> r;
    SimpleInterest s1(p, y, r);
    s1.displayValue();

    cout << "Enter the interest r in integer value:" << endl;
    cin >> R;
    SimpleInterest s2(p, y, R);
    s2.displayValue();

    return 0;
}