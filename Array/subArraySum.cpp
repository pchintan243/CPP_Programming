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
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += a[j];
            cout << current << " ";
        }
    }
    return 0;
}