#include <iostream>
using namespace std;

// If you inherit class and you make constructor of derive class then make sure you make default constructor of base class otherwise it will throws error
// Private members are never inherited
// If you will inherit class then if you will not give visibility mode on derived class then it takes automatically as a private visibility mode
// It means you can't access public member of base class in derived class
// It means public member of the base class becomes private member of derived class
// But you give public visibility mode then it means you can access public member of base class & note:- You can't access private member of base class.
int main()
{
    
    return 0;
}