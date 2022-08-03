#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "Enter the array size: " << endl;
    cin >> n;
    int a[n][n];
    int b[n][n];
    int sum[5][5];
    cout << "Enter the first array element one by one: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the second array element one by one: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}