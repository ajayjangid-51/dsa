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
#define range(arr) arr.begin(), arr.end()
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
    vi v = {4, 2, 2, 6, 4};
    int K = 6;
    vi prefix(v.size());
    prefix[0] = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        prefix[i] = prefix[i - 1] ^ v[i];
    }
    trav(prefix) print(x);
    nline;
    int cnty = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int y = prefix[i] ^ K;
        deb(y);
    }
    debline(cnty);
}
void solve2()
{
    vi v = {4, 2, 2, 6, 4};
    int K = 6;
    unordered_map<int, int> mp;
    mp[0]++;
    int xr = 0;
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        xr ^= v[i];
        int y = xr ^ K;
        if (mp.find(y) != mp.end())
        {
            cnt += mp[y];
        }
        mp[xr]++;
    }
    debline(cnt);
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}