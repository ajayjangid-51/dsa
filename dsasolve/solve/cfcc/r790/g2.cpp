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

int anss;

map<int, pii> gmp;
void dfs(int s, int e, map<int, vi> &adj, string &str)
{
    if (str[s - 1] == 'W')
        gmp[s] = {1, 0};
    else
        gmp[s] = {0, 1};
    for (auto z : adj[s])
    {
        if (z == s)
            continue;
        dfs(z, s, adj, str);
        gmp[s].first += gmp[z].first;
        gmp[s].second += gmp[z].second;
    }
    if (gmp[s].first == gmp[s].second)
    {
        // debline(s);
        anss++;
        // debline(anss);
    }
}

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
    gmp.clear();
    anss = 0;
    int n;
    cin >> n;
    vi v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    map<int, vi> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[i].push_back(i);
    }
    for (int i = 1; i < n; i++)
    {
        mp[v[i - 1]].push_back(i + 1);
    }

    string str;
    cin >> str;
    dfs(1, 1, mp, str);
    // trav(gmp)
    // {
    //     print(x.first);
    //     print("->");
    //     print(x.second.first);
    //     print(x.second.second);
    //     nline;
    // }
    // debline(anss);
    print(anss);
    nline;
}
int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}