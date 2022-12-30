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
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
void solve()
{
    string s("slddedwfmo");
    // string s("acfgbd");
    // string s("acfgbd");
    map<char, int> mp;
    int maxi = 1;
    int k = 16;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char c = s[i];
        deb(s[i]);
        deb(mp[s[i]]);
        for (int j = 0; j < k; j++)
        {
            if (c > 'z')
                break;
            deb(c);
            mp[s[i]] = max(mp[s[i]], mp[c] + 1);
            c++;
        }
        deb(c);
        mp[s[i]] = max(mp[s[i]], mp[c] + 1);
        linebreak1;
        c = s[i];
        for (int j = 0; j < k; j++)
        {
            c--;
            if (c < 'a')
                break;
            deb(c);
            mp[s[i]] = max(mp[s[i]], mp[c] + 1);
        }
        deb(mp[s[i]]);
        maxi = max(maxi, mp[s[i]]);
        linebreak1;
    }

    debline(maxi);
    linebreak1;
    linebreak1;
    trav(mp)
    {
        print(x.first);
        print(x.second);
        nline;
    }
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}