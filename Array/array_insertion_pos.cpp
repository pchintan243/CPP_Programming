#include <iostream>
using namespace std;
int main()
{
    int n, m, pos, i, j, temp;
    cout << "Enter the array size: " << endl;
    cin >> n;
    int a[n + 1];
    cout << "Enter the element one by one: " << endl;
    for (i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "Enter the position: " << endl;
    cin >> pos;

    cout << "Enter the element: " << endl;
    cin >> m;

    for (i = n + 1; i > pos - 1; i--)
    {

        a[i] = a[i - 1];
    }
    a[pos - 1] = m;

    cout << "After inserting element: " << endl;
    for (i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}