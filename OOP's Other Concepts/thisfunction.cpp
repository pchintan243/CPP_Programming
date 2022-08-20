#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void setData(int a) {
        // when i have same name of variable then i use this function.
        this->a = a;
    }
    void getData() {

        cout << "The value of a is : " << a <<endl;
    }
};
int main()
{
    A a;
    a.setData(6);
    a.getData();
    return 0;
}