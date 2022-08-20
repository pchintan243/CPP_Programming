#include <bits/stdc++.h>
using namespace std;

class MemberFunction
{
    // By default any variable intialization is private
    string s;

public:
    void getNumber();
    void checkNumber();
    void onesComplement();
    void display();
};

// Using this syntax you can access public member function of class
void MemberFunction :: getNumber(void)
{
    cout << "Enter a binary number:\n";
    cin >> s;
}
void MemberFunction :: checkNumber(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format.." << endl;
            exit(0);
        }
    }
}
void MemberFunction :: onesComplement(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0'; 
        }
    }
}
void MemberFunction :: display(void)
{
    cout << "Displaying binary number;\n";
    for(int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    MemberFunction m;
    m.getNumber();
    m.checkNumber();
    m.onesComplement();
    m.display();
    return 0;
}