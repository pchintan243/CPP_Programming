#include <bits/stdc++.h>
using namespace std;

// inline function means it set or register the value in very small time
// Ony when inline function use in function less number of lines
// If in the function 1 or 2 lines are there or small operation to be performed at that time use only.
// when recursion is used at that time inline function is not used
// static variables are there at that time also not used inline function
inline int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 9;
    int b = 3;

    cout << "Multiply two numbers:" << mul(a, b) << endl;
    return 0;
}