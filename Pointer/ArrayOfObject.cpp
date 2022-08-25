#include <iostream>
using namespace std;

class Shop
{
    int mrp;
    int cost;

public:
    void setData(int a, int b)
    {
        mrp = a;
        cost = b;
    }
    void getData()
    {
        cout << "MRP is: " << mrp << endl;
        cout << "Cost is: " << cost << endl;
    }
};

int main()
{
    int size;
    int p, q;
    cout << "Enter the size: " << endl;
    cin >> size;

    Shop *s1 = new Shop[size];
    Shop *ptr = s1;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter mrp and cost of item " << i + 1 << ":"<< endl;
        cin >> p >> q;
        s1->setData(p, q);
        s1++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "MRP and cost of item-" << i + 1 << "." << endl;
        ptr->getData();
        ptr++;
    }
    return 0;
}