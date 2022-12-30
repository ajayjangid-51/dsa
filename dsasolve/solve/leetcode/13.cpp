#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    file();
    char i = 'I', v = 'V', x = 'X', l = 'L', c = 'C', d = 'D', m = 'M';
    map<char, int> mp;
    mp.insert({i, 1});
    mp.insert({v, 5});
    mp.insert({x, 10});
    mp.insert({l, 50});
    mp.insert({c, 100});
    mp.insert({d, 500});
    mp.insert({m, 1000});
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    string s;
    // cout << "input the string" << endl;
    cin >> s;
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (i != s.length() - 1)
        {
            // cout << s[i] << endl;
            if (mp[s[i]] < mp[s[i + 1]])
            {
                num += mp[s[i + 1]] - mp[s[i]];
                i++;
            }
            else
            {
                num += mp[s[i]];
            }
        }
        else
        {
            num += mp[s[i]];
        }
    }
    cout << num << endl;

    return 0;
}