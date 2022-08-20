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
    int current = 2;
    int lastDifference = a[i] - a[i - 1];
    int ans = 2;
    j = 2;
    while (j < n)
    {

        if (lastDifference == a[j] - a[j - 1])
        {

            current++;
        }
        else
        {

            lastDifference = a[j] - a[j - 1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout << "Your maximum count is " << ans;
    return 0;
}