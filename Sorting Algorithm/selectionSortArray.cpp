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

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (a[j] < a[i])
            {

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "your sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    return 0;
}