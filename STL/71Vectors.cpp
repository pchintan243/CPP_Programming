#include <iostream>
#include <vector>
using namespace std;

// Vector is use for resizing
// Size is not fix in vector

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
}

int main()
{
    // Ways to create a vector
    vector<int> v1;     // zero length vector
    vector<char> v2(4); // 4-element character vector
    // v2.push_back('4');
    // display(v2);
    vector<char> v3(v2); // 4-element character vector from vector2
    // display(v3);
    vector<int> v4(6, 3); // 6-element vector of 3s
    // display(v4);          // It prints 6 times 3
    // cout << v4.size() << endl;
    int element;
    int size;
    cout << "Enter the vector size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> element;
        v1.push_back(element); // for insertion in vector
    }

    // v1.pop_back(); // for deletion in vector

    // Inserting the element at begin
    vector<int>::iterator iter = v1.begin();

    // You can call it only once at a same time
    // At a same time you can't call both

    v1.insert(iter, 455); // insert at first
    // v1.insert(iter + 2, 55); // insert at third index
    // v1.insert(iter + 2, 5, 12); // it prints 5 times 12 starts to third index--> in short it sends a copy of data
    display(v1);
    return 0;
}