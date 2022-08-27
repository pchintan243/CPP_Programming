#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects: Function wrapped in a class so that it available like an object
    int arr[] = {1, 7, 3, 4, 12, 2};
    sort(arr, arr + 5); // It will sort only first 5 element in ascding order
    sort(arr, arr + 5, greater<int>()); // It will sort only first 5 element in descending order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}