#include <iostream>
#include <list>
using namespace std;

void display(list<int> &list1)
{
    list<int>::iterator it;
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> list1; // List of 0 length

    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(3);
    list1.push_back(4);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    display(list1);
    cout << endl;
    list1.pop_back();  // Deletion at end
    list1.pop_front(); // Deletion at first
    list1.remove(9);   // Deletion by value
    cout << "After deletion list is: " << endl;
    display(list1);

    cout << endl;
    list<int> list2(4); // Empty list of size 4
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 12;
    itr++;
    *itr = 78;
    itr++;
    *itr = 67;
    itr++;
    display(list2);
    cout << endl;
    list2.sort(); // Sorting the list
    cout << "After sorting:" << endl;
    display(list2);
    cout << endl;

    // Merging the list
    list1.merge(list2);
    cout << "List1 after merging:" << endl;
    display(list1);
    cout << endl;

    // Reverse the list
    list1.reverse();
    display(list1);
    cout << endl;
    return 0;
}