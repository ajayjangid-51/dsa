#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
bool hasGroupsSizeX(vector<int> &deck)
{
    map<int, int> mp;
    for (auto x : deck)
    {
        mp[x]++;
    }
    // for (auto x : mp)
    //     cout << x.first << " " << x.second << endl;
    // int smallest = mp.begin()->second;
    // if (smallest < 2)
    auto it = mp.begin();
    it++;
    int b = it->second;
    return 0;
    // cout << smallest << endl;
    for (auto x : mp)
    {
        // cout << x.first << " " << x.second << endl;
        // if (x.second == smallest)
        //     continue;
        if (x.second != smallest and (x.second % smallest) != 0)
        {
            // cout << "bye" << endl;
            return 0;
        }

        // cout << (x.second % smallest) << endl;
        // if ()
        // {
        //     cout << "Hi" << endl;
        //     return 0;
        // }
    }
    return 1;
}
int main()
{
    file();
    vector<int> deck = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2};
    cout << hasGroupsSizeX(deck) << endl;

    return 0;
}