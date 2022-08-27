#include <iostream>
using namespace std;

// Rules for virtual is_function
// 1. They cannot be static
// 2.They are accessed by object pointers
// 3. Virtual function can be a friend of another class
// 4. A virtual function in base class might not be used
// 5. If a virtual function defined in a base class, there is no necessary to redefining it in the derived class

// If a function in a derived class is not there then it will call to virtual function content of a base class
class Chintan
{
protected:
    string title;
    float rating;

public:
    Chintan(string s, float r)
    {
        title = s;
        rating = r;
    }
    // If i don't make it function as a virtual then it will be display in output
    // But if i make it function as a virtual then base class virtual function content can't be execute if i will pointing to derived class as a object
    virtual void display()
    {
        cout << "Chintan codes executed..!!" << endl;
    }
};

class Father : public Chintan
{
    int value;

public:
    // s and r will be intialize using bases class constructor
    // I will only intialize to value
    Father(string s, float r, int v) : Chintan(s, r)
    {
        value = v;
    }
    void display()
    {
        cout << "The video name is: " << title << endl;
        cout << "The video rating is: " << rating << endl;
        cout << "The value of video is: " << value << endl;
    }
};

class Mother : public Chintan
{
    int data;

public:
    Mother(string s, float r, int d) : Chintan(s, r)
    {
        data = d;
    }
    void display()
    {
        cout << "The video name is: " << title << endl;
        cout << "The video rating is: " << rating << endl;
        cout << "The data of video is: " << data << endl;
    }
};

int main()
{
    string title;
    float rating;
    int data, value;

    title = "Value of the video";
    rating = 4.5;
    value = 89;

    Father f(title, rating, value);
    f.display();

    title = "Data of the video";
    rating = 4.3;
    data = 29;
    Mother m(title, rating, data);
    m.display();

    // Making pointer to access class method
    Chintan *ptr[2];
    ptr[0] = &f;
    ptr[1] = &m;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}