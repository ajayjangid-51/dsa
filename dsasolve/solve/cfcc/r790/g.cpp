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

map<int, vi> gmp;
void dfs(int s, int e, map<int, vi> &adj)
{
    gmp[s].push_back(s);

    // for (auto x : adj[s])
    for (int i = 1; i < adj[s].size(); i++)
    {
        // if(x == e) continue;
        // deb(adj[s][i]);
        // if (adj[s][i] != e)
        // {
        //     dfs(adj[s][i], s, adj);
        //     cnt[s] += cnt[adj[s][i]];
        // }

        if (adj[s][i] != e)
        {
            dfs(adj[s][i], s, adj);
            // gmp[s] += gmp[x];
            trav(gmp[adj[s][i]])
            {
                gmp[s].push_back(x);
            }
        }
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
    // linebreak;
    // trav(cnt) print(x);
    // linebreak;
    int n;
    cin >> n;
    vi v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    // linebreak;
    // trav(v) print(x);
    // linebreak;
    map<int, vi> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[i].push_back(i);
    }
    for (int i = 1; i < n; i++)
    {
        mp[v[i - 1]].push_back(i + 1);
    }
    // trav(mp)
    // {
    //     print(x.first);
    //     print("->");
    //     trav2(x.second) print(y);
    //     nline;
    // }
    dfs(1, 1, mp);
    // linebreak;
    // trav(cnt) print(x);
    // linebreak;
    // trav(gmp)
    // {
    //     print(x.first);
    //     print("->");
    //     trav2(x.second) print(y);
    //     nline;
    // }
    int ans = 0;
    string str;
    cin >> str;
    vi vstr(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'W')
            vstr[i] = 1;
        else
            vstr[i] = -1;
    }
    // linebreak;
    // trav(vstr) print(x);
    // linebreak;

    trav(gmp)
    {
        // deb(x.first);
        // print("->");
        // for (auto z : x.second)
        // {
        //     print(z);
        // }
        // linebreak;
        int temp = 0;
        for (int i = 0; i < x.second.size(); i++)
        {
            // deb(x.second[i]);
            // deb(vstr[x.second[i] - 1]);
            temp += vstr[x.second[i] - 1];
        }
        // debline(temp);
        if (temp == 0)
            ans++;
    }
    // debline(ans);
    print(ans);
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