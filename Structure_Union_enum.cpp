#include <iostream>
using namespace std;

struct chintan
{
    int id;
    string name;
    float salary;
};

// Another way to define a structure
typedef struct person
{
    int id;
    string name;
    float salary;
} obj;

// union is provide batter memory management

union hello
{
    // at a time which data type is used only that much space is taken
    // if id is used at time then name and salary is not take space
    int id;
    char ch;
    float salary;
};

int main()
{
    struct chintan chint;
    chint.id = 2;
    chint.name = "Chintan";
    chint.salary = 2300.12;

    cout << "Chintan's id: " << chint.id << endl;
    cout << "Chintan's name: " << chint.name << endl;
    cout << "Chintan's salary: " << chint.salary << endl;

    obj chintan;
    chintan.id = 22;
    cout << "Chintan's id: " << chintan.id << endl;

    union hello e;
    e.id = 32;
    cout << e.id << endl;

    e.ch = 'C';
    // at that time you see print the id and it displays garbage value because ch is initialized.
    // so at a time only one data type can be accessable
    cout << e.id << endl;
    cout << e.ch << endl;

    // enum is a one type of data-type
    // It stores value as a array index
    enum Fruit
    {
        apple,
        banana,
        watermelon
    };

    // In this example you print cout then it displays 0 because apple in Fruit at zeroth index
    cout << apple;
    return 0;
}