#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[10], j, i, n;
    int mx = INT8_MIN;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Enter the elements one by one :" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << "Your maximum number is : " << endl;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    cout << mx << " ";
    return 0;
}