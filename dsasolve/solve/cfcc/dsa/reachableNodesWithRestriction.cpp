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
void dfs(int i, int &ans, vb &visited, vb &restricted, vvi &v)
{
    deb(i);
    ans++;
    visited[i] = 1;
    for (int j = 0; j < v[i].size(); j++)
    {
        print("😀");
        print(j);
        print(v[i][j]);
        nline;
        if (!restricted[v[i][j]] and !visited[v[i][j]])
        {
            print("🔵");
            print(v[i][j]);
            nline;
            dfs(v[i][j], ans, visited, restricted, v);
        }
    }
}

vvi makeAdj()
{
    vvi v = {
        {0, 1},
        {0, 2},
        {0, 5},
        {0, 4},
        {3, 2},
        {6, 5},
    };

    vvi adj(v.size() + 1);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            for (int k = 0; k < v[i].size(); k++)
            {
                if (j != k)
                {
                    adj[v[i][j]].push_back(v[i][k]);
                }
            }
        }
        nline;
    }

    trav(adj)
    {
        trav2(x) print(y);
        nline;
    }
    return adj;
}
void solve()
{
    vvi v(7);
    v[0] = {1, 4, 5};
    v[1] = {0, 2, 3};
    v[2] = {1};
    v[3] = {1};
    v[4] = {0};
    v[5] = {0, 6};
    v[6] = {5};

    linebreak1;

    linebreak1;
    vvi ad = makeAdj();
    linebreak1;
    linebreak1;

    vb restricted(7, 0);
    vb visited(7, 0);
    restricted[4] = 1;
    restricted[2] = 1;
    restricted[1] = 1;
    int ans = 0;
    dfs(0, ans, visited, restricted, ad);
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