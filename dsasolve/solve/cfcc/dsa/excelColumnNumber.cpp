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
#define linebreak cout << "_______________________________" \
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
    map<char, int> mp;
    mp['A'] = 1;
    mp['B'] = 2;
    mp['C'] = 3;
    mp['D'] = 4;
    mp['E'] = 5;
    mp['F'] = 6;
    mp['G'] = 7;
    mp['H'] = 8;
    mp['I'] = 9;
    mp['J'] = 10;
    mp['K'] = 11;
    mp['L'] = 12;
    mp['M'] = 12;
    mp['N'] = 14;
    mp['O'] = 15;
    mp['P'] = 16;
    mp['Q'] = 17;
    mp['R'] = 18;
    mp['S'] = 19;
    mp['T'] = 20;
    mp['U'] = 21;
    mp['V'] = 22;
    mp['W'] = 23;
    mp['X'] = 24;
    mp['Y'] = 25;
    mp['Z'] = 26;

    // string s("ZZZB");
    string s("CAA");
    int ans = 0;
    for (int i = 1; i < s.size(); i++)
    {

        ans += pow(26, i);
        deb(ans);
    }
    linebreak;
    deb(ans);
    for (int i = 0; i < s.size() - 1; i++)
    {
        int t = mp[s[i]] - 1;
        for (int j = i + 1; j < s.size(); j++)
        {
            t *= 26;
        }
        ans += t;
    }
    deb(ans);
    ans += mp[s.back()];
    deb(ans);

    debline(ans);
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