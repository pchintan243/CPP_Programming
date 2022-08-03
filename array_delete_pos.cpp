#include <iostream>
using namespace std;

int main()
{
    int i, j, n, m, temp, pos;
    cout << "Enter the array size: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the array element one by one: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the position which you want to delete: " << endl;
    cin >> pos;

    for (i = pos - 1; i < n - 1; i++)
    {

        a[i] = a[i + 1];
    }

    cout << "After delete new array: " << endl;

    for (int i = 0; i < n - 1; i++)
    {

        cout << a[i] << endl;
    }
    return 0;
}