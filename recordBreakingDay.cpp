#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, n, mx = -1;
    int ans = 0;
    cout << "Enter the value : " << endl;
    cin >> n;
    cout << "Enter the element one by one : " << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    a[n + 1];
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > a[i + 1] && mx < a[i])
        {

            ans++;
        }
        mx = max(a[i], mx);
    }
    cout << "your maximum record breaking day is :" << ans;
    return 0;
}