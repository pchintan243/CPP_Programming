#include <iostream>
using namespace std;

bool pairSum(int n, int a[], int k)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (a[j] + a[i] == k)
            {

                cout << i << " " << j << endl;
                return true;
            }
        }
    }
}
int main()
{
    int n, k;

    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter the value of k : " << endl;
    cin >> k;
    cout << "Enter the value one by one : " << endl;

    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    cout << pairSum(n, a, k);
    return 0;
}