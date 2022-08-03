#include <iostream>
#include <string.h>
using namespace std;
class StringCheck
{
    char str[50];
public:
    void inputString()
    {
        gets(str);
    }
    int operator==(StringCheck s)
    {
        if (!strcmp(str, s.str))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    StringCheck s1, s2;
    cout << "Enter first string : " << endl;
    s1.inputString();
    cout << "Enter second string : " << endl;
    s2.inputString();
    if (s1 == s2)
    {
        cout << "Both Strigs are Equal" << endl;
    }
    else
    {
        cout << "Strings are Not Equal" << endl;
    }
    return 0;
}