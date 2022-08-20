#include <iostream>
using namespace std;
class student
{
public:
    char name[40];
    int age;
    int add;
    void studentAdd();
    void getValue();
    void displayValue();
};

void student::getValue()
{

    cout << "Enter the student name : " << endl;
    cin >> name;
    cout << "Enter the student age : " << endl;
    cin >> age;
}
void student::displayValue()
{

    cout << "Student name is : " << name << endl;
    cout << "Student age is : " << age << endl;
}
int main()
{
    int i;
    student data[i];
    int add;
    cout << "Enter the value which you want to add : " << endl;
    cin >> add;

    for (i = 0; i < add; i++)
    {
        data[i].getValue();
    }
    cout << "Student display detail : " << endl;
    for (int i = 0; i < add; i++)
    {
        data[i].displayValue();
    }
    return 0;
}