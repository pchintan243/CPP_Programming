#include <iostream>
using namespace std;

// What do you mean by virtual base class?
// If we have one class A and we inherit class A from class B & class C. And one more Base class D inherit from class B and class c. so if we inherti D then if B and C use A's variable so D has inherit two times.
// So that situation whenever occur then we can make derived class as a virtual class
// It is send a copy of it's variable so it can inherit only one time.

class Student
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
    void printRollNo()
    {
        cout << "Your Roll No. is: " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printMarks()
    {
        cout << "Your maths marks is: " << maths << endl;
        cout << "Your physics marks is: " << physics << endl;
    }
};

// Both are same syntax
// class Sports : public virtual Student
class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void printScore()
    {
        cout << "Your score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printRollNo();
        printMarks();
        printScore();

        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result chintan;
    chintan.setRollNo(13);
    chintan.setMarks(99, 99);
    chintan.setScore(90);
    chintan.display();
    return 0;
}