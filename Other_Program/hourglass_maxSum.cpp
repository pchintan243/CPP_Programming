#include <iostream>
using namespace std;
class hourglass
{
    int arr[20][20];
    int sum = 0;
    int max = 0;
    int n;

public:
    void getdata();
    void information();
    void result();
};
void hourglass::getdata()
{

    cout << "Enter the row and column value : " << endl;
    cin >> n;
    cout << "Enter the array element one by one : " << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }
}

void hourglass ::information()
{

    for (int i = 0; i < n - 2; i++)
    {
        sum = 0;
        for (int j = 0; j < n - 2; j++)
        {

            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > max)
            {
                max = sum;
            }
        }
    }
}

void hourglass ::result()
{

    cout << "Your hourglass maximum sum is : " << max << endl;
}

int main()
{
    hourglass h1;
    h1.getdata();
    h1.information();
    h1.result();
    return 0;
}
