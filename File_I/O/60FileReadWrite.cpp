#include <iostream>
#include <fstream>
using namespace std;

// The useful classes for working with C++ are:
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

// In order work with files in C++, you will have to open it. Primarily, there are two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

int main()
{
    string str = "Chintan";
    string str2;
    // Opening a file using constructor and writing it
    ofstream out("SampleFile.txt"); // Write operation
    out << str;
    
    // Opening a file using constructor and reading it
    ifstream in("SecondFile.txt"); // Read operation
    // in >> str2;
    // It will print only before whitespace content or before newline content
    // cout << str2 << endl; 


    // It will print all the content of file
    getline(in, str2);
    cout << str2 << endl;

    return 0;
}