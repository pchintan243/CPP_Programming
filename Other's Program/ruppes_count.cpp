// ruppes count karvana 6
// 6 note aapeli 6 amathi jm bane m nani rite count thavu joiye.

using namespace std;
#include <iostream>
int main()
{

    int a, n, r, b;
    cout << "enter the number :";
    cin >> n;
    while (n--)
    {

        int x;
        cin >> x;

        int notes[] = {1, 2, 5, 10, 50, 100};
        int sum = 0;
        for (int i = 5; i >= 0; i--)
        {

            sum = sum + x / notes[i];
            x = x % notes[i];
        }
        cout << sum << endl;
    }

    return 0;
}