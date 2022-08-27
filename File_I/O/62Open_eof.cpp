#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("SampleFile.txt");
    out << "This is me\n";
    out << "This is chair\n";
    out << "This is table\n";
    out << "This is bad\n";
    out.close();

    ifstream in;
    in.open("SampleFile.txt");
    string str1, str2;
    // It gives word upto whitespace or newline
    // in >> str1 >> str2;
    // cout << str1 << str2 << endl;

    // eof means end of file
    // It is use for prints entire file

    while (in.eof() == 0)
    {
        getline(in, str1);
        cout << str1 << endl;
    }
    in.close();
    return 0;
}