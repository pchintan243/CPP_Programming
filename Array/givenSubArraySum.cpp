#include <iostream>
using namespace std;
int main()
{
    int a[100], n, s;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    cout << "Enter the value of s : " << endl;
    cin >> s;
    cout << "Enter the elements one by one :" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    int i = 0, j = 0, start = -1, end = -1, sum = 0;
    if (sum == s)
    {

        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {

        sum += a[j];
        while (sum > s)
        {

            sum -= a[i];
            i++;
        }
        if (sum == s)
        {

            start = i + 1;
            end = j + 1;
        }
        j++;
    }
    cout << "Your answer is :" << start << " " << end << endl;
    return 0;
}