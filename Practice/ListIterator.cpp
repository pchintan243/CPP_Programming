#include <iostream>
#include <list>
using namespace std;

void display(list<int> &list1)
{
    list<int>::iterator iter;

    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list<int> list2;
    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(5);

    list1.push_front(8);

    list1.pop_back();

    list1.pop_front();

    list1.remove(4);

    list1.sort();

    display(list1);

    list2.push_back(9);
    list2.push_back(3);
    list2.push_back(7);
    display(list2);
    list1.swap(list2);
    display(list1);
    display(list2);
    return 0;
}