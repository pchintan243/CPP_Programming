#include <iostream>
#include <map>
#include <string>
using namespace std;
// Map is an associative array
// Map is use for stores key and value pairs

int main()
{
    map<string, int> marks;
    marks["Chintan"] = 99;
    marks["Sumit"] = 67;
    marks["Harshit"] = 45;
    marks["Krunal"] = 23;
    marks.insert({{"Kevin", 12}, {"Meet", 34}});
    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    cout << "Map size is: " << marks.size() << endl;
    cout << "Map max_size is: " << marks.max_size() << endl;
    cout << "Map empty's return value is: " << marks.empty() << endl;
    return 0;
}