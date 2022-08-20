#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Enter the elements one by one : " << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    int current = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {

        current = 0;

        for (int j = i; j < n; j++)
        {

            current += a[j];
        }
        mx = max(current, mx);
    }
    cout << "Your maximum subarray sum is : " << mx;
    return 0;
}