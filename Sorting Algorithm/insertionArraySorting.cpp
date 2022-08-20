#include <iostream>
using namespace std;
int main()
{
    int a[10], j, i, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Enter the elements one by one :" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {

        int current = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > current)
        {

            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }

    cout << "your sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    return 0;
}