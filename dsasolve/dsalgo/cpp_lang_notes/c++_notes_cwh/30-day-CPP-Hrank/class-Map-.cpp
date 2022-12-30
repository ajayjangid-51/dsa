// 🎆 link: https://www.geeksforgeeks.org/map-find-function-in-c-stl/ 🎆
// 🎆 link: https://www.geeksforgeeks.org/set-in-cpp-stl/?ref=lbp 🎆
#include <iostream>
#include <map> // as map as same like as dictionary k tarah hi hota hai.
/* 🌟 thus toh apn map ko mostly Dictionary ki tarah use kr skteh hai. 🌟 */
#include <string>
using namespace std;

int main()
{
    map<string, long long> phonebook;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string string_name;
        long long phno;
        cin >> string_name >> phno;

        // "type here to repeat"
        phonebook.insert(pair<string, long long>(string_name, phno));
    };
    string quer[n];
    for (int i = 0; i < n; i++)
    {
        // "type here to repeat"
        cin >> quer[i];
    };
    for (int i = 0; i < n; i++)
    {
        if (quer[i] == phonebook.find(quer[i])->first)
        {
            cout << phonebook.find(quer[i])->first << "=" << phonebook.find(quer[i])->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    };

    return 0;
}