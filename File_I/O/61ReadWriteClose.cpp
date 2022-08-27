#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream hello("SampleFile.txt");
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    // You can write in file using below syntax
    hello << "My name is: " << name;
    hello.close();

    ifstream hii("SampleFile.txt");
    string content;
    hii >> content;
    cout << "The content of the file is: " << content << endl;
    hii.close();
    return 0;
}