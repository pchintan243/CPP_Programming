#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int maxNumber = INT8_MIN;
    int minNumber = INT8_MAX;
    int n, a[10];
    cout << "Enter the value :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        maxNumber = max(a[i], maxNumber);
        minNumber = min(a[i], minNumber);
    }
    cout << "Maximum number is :" << maxNumber << endl;
    cout << "Minimum number is :" << minNumber << endl;
    return 0;
}