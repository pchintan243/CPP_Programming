#include <iostream>
using namespace std;
class stringFunction
{

public:
    char str1[30], str2[30];
    int i,count=0;
    int length1 = 0, length2 = 0;
    void getString();
    void length();
    void copy();
    void concat();
    int compare();
};
void stringFunction::getString()
{

    cout << "Enter the first string : " << endl;
    cin >> str1;
    cout << "Enter the second string : " << endl;
    cin >> str2;
}
void stringFunction::length()
{

    for (int i = 0; i < str1[i] != '\0'; i++)
    {

        length1++;
    }
    cout << "Your first string length is : " << length1 << endl;

    for (i = 0; i < str2[i] != '\0'; i++)
    {

        length2++;
    }
    cout << "Your second string length is : " << length2 << endl;
}
void stringFunction::copy()
{

    for (i = 0; i < length2; i++)
    {

        str1[i] = str2[i];
    }
    str1[i] = '\0';
    cout << "Your copied string is : " << str1 << endl;
}
void stringFunction::concat()
{
    cout << "concat string : " << endl;
    for (i = length1; i < length1 + length2; i++)
    {

        str1[i] = str2[i - length1];
    }
    str1[i] = '\0';
    cout << "Your concatenate string is : " << str1 << endl;
}

int stringFunction::compare()
{
    if(length1!=length2) {

        cout << "Your string is not same." << endl;
        return 1;
    }
    for(i=0;i<length1;i++) {

        if (str1[i] == str2[i])
        {
            count++;
        }
    }
    if(count == length1) {

        return 0;
    }
    return 1;
}

int main()
{
    stringFunction object;
    object.getString();
    object.length();
    object.compare();
    object.concat();
    object.copy();

    return 0;
}