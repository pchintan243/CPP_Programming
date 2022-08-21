#include <iostream>
using namespace std;

class Student
{

protected:
    int rollNumber;

public:
    void setRollNumber(int);
    void getRollNumber();
};

void Student ::setRollNumber(int number)
{
    rollNumber = number;
}
void Student ::getRollNumber()
{
    cout << "The roll number is: " << rollNumber << endl;
}

class Exam : public Student
{
protected:
    float physics;
    float maths;

public:
    void setMarks(float p, float m);
    void getMarks();

};

void Exam :: setMarks(float p, float m) {
    physics = p;
    maths = m;
}
void Exam ::getMarks() {
    cout << "Your physics marks are: " << physics << endl;
    cout << "Your maths marks are: " << maths << endl;
}

class Result : public Exam {
protected:
    float percentage;
public:
    void displayPercentage();
};

void Result ::displayPercentage() {
    getRollNumber();
    getMarks();
    cout << "You are getting: " << (maths + physics)/2 << "% Congratulation..!!" << endl;
}

int main()
{
    Result r1;
    r1.setRollNumber(13);
    // r1.getRollNumber();
    r1.setMarks(90, 100);
    // r1.getMarks();
    r1.displayPercentage();
    return 0;
}