#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
void dfs(int node, int parent, vvi &graph, vvi &dp, vi &level, int &LOG)
{
    dp[node][0] = parent;
    for (int i = 1; i < LOG; i++)
    {
        dp[node][i] = dp[dp[node][i - 1]][i - 1];
    }
    for (auto x : graph[node])
    {
        if (x != parent)
        {
            level[x] = level[node] + 1;
            dfs(x, node, graph, dp, level, LOG);
        }
    }
}

int lca(int node1, int node2, vvi &dp, vi &level, int LOG)
{
    if (level[node1] < level[node2])
        swap(node1, node2);
    // getting ancestor of node1 which is at same level of node2;
    for (int i = LOG; i >= 0; i--)
    {
        if (level[node1] - pow(2, i) >= level[node2])
        {
            node1 = dp[node1][i];
        }
    }
    if (node1 == node2)
        return node2;
    for (int i = LOG; i >= 0; i--)
    {
        if (dp[node1][i] != dp[node2][i])
        {
            node1 = dp[node1][i];
            node2 = dp[node2][i];
        }
    }
    return dp[node2][0];
}
void solve()
{
    int n = 9;
    cin >> n;
    int LOG = ceil(log2(n));
    // deb(LOG);
    vvi graph(n + 1, vi(LOG));
    for (int i = 1; i <= n; i++)
    {
        vi tmp;
        int m;
        cin >> m;
        while (m--)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        graph[i] = tmp;
    }
    // graph[1] = {2, 3, 4};
    // graph[2] = {1, 5};
    // graph[3] = {1, 6, 7, 8};
    // graph[4] = {1, 9};
    // graph[5] = {2};
    // graph[6] = {3};
    // graph[7] = {3};
    // graph[8] = {3};
    // graph[9] = {4};
    vvi dp(n + 1, vi(LOG));
    vi level(n + 1);
    level[1] = 0;
    dfs(1, 1, graph, dp, level, LOG);
    // linebreak1;
    // trav(dp)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    // linebreak1;
    // trav(level) print(x);
    // linebreak1;

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << (lca(a, b, dp, level, LOG)) << endl;
    }
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