#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    io_faster
    file();
    // char i = 'I', v = 'V', x = 'X', l = 'L', c = 'C', d = 'D', m = 'M';
    // unordered_map<char, int> mp;
    // mp.insert({i, 1});
    // mp.insert({v, 5});
    // mp.insert({x, 10});
    // mp.insert({l, 50});
    // mp.insert({c, 100});
    // mp.insert({d, 500});
    // mp.insert({m, 1000});
    // trav(mp) cout << x.first << "  " << x.second << endl;

    unordered_map<int, string> symbol;
    symbol.insert({1, "I"});
    symbol.insert({2, "II"});
    symbol.insert({3, "III"});
    symbol.insert({4, "IV"});
    symbol.insert({5, "V"});
    symbol.insert({6, "VI"});
    symbol.insert({7, "VII"});
    symbol.insert({8, "VIII"});
    symbol.insert({9, "IX"});
    symbol.insert({10, "X"});
    symbol.insert({40, "XL"});
    symbol.insert({50, "L"});
    symbol.insert({90, "XC"});
    symbol.insert({100, "C"});
    symbol.insert({400, "CD"});
    symbol.insert({500, "D"});
    symbol.insert({900, "CM"});
    symbol.insert({1000, "M"});
    int num;
    cout << "inpute your num" << endl;
    cin >> num;
    // string ans;
    vector<string> ans;
    int placer = 1;
    while (num != 0)
    {
        int x = num % 10;
        int xx = x;
        x *= placer;
        if (symbol.count(x))
            // ans = ans + symbol[x];
            ans.push_back(symbol[x]);
        else
        {
            if (xx < 6)
            {
                for (int i = 0; i < xx; i++)
                {
                    // ans += symbol[placer];
                    ans.push_back(symbol[placer]);
                }
            }
            else
            {
                cout << "heii" << endl;
                vector<string> temp;
                while (xx != 5)
                {
                    x -= placer;
                    xx--;
                    // ans.push_back()
                    temp.push_back(symbol[placer]);
                }
                temp.push_back(symbol[5 * placer]);
                // reverse(temp.begin(), temp.end());
                for (int i = 0; i < temp.size(); i++)
                {
                    ans.push_back(temp[i]);
                }
            }
        }

        num /= 10;
        placer *= 10;
    }
    // cout << "the string is " << ans << endl;
    // ans.reserve(ans.begin() , ans.end());
    reverse(ans.begin(), ans.end());
    cout << endl;
    for (auto x : ans)
    {
        cout << x;
    }

    return 0;
}