#include <iostream>
using namespace std;
// if this array is given in sorted list then and then only you perform this type of solution.
bool pairSum(int n, int a[], int k)
{

    int low = 0, high = n - 1;
    while (low < high)
    {

        if (a[low] + a[high] == k)
        {

            cout << low << " " << high << endl;
            return true;
        }
        else if (a[low] + a[high] < k)
        {

            low++;
        }
        else if (a[low] + a[high] > k)
        {

            high--;
        }
        else
        {

            cout << "No pair is in this array to sum equal to k." << endl;
            return false;
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