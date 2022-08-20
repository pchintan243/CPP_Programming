#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        cout << "We are in constructor..!!" << endl;
        cout << count << endl;
        count++;
    }

    // Destructor in created
    ~num()
    {
        cout << "We are in destructor..!!" << endl;
        cout << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside the main function" << endl;

    // when all operation is performed at last destructor is called
    num obj;
    {
        cout << "Entering this block" << endl;
        num n2, n3;
        cout << "Existing block" << endl;
    }
    cout << "Back to main..!!" << endl;

    return 0;
}