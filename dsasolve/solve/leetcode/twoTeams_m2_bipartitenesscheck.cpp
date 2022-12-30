#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()
#define print(c) cout << c << " "

#define ll long long
#define pint unsigned int
#define pb push_back
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
#define vvi vector<vi>
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
void dfs(int node, bool color, vi &colors, vvi &adj, vb &visited, bool &ans)
{
    deb(node);
    deb(color);
    if (visited[node])
    {
        deb(colors[node]);
        deb(color);
        if (colors[node] != color)
        {

            ans = 0;
            return;
        }
        else
            return;
    }
    colors[node] = color;
    visited[node] = 1;
    for (auto x : adj[node])
    {
        if (!ans)
        {
            // break;
            return;
        }

        dfs(x, !color, colors, adj, visited, ans);
    }
}
int solve(int A, vector<vector<int>> &B)
{
    vb visited(A + 1, 0);
    vvi adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    trav(adj)
    {
        trav2(x) print(y);
        nline;
    }
    bool ans = 1;
    vi colors(A + 1, -1);
    for (int i = 1; i <= A; i++)
    {
        if (!visited[i])
        {

            dfs(i, 0, colors, adj, visited, ans);
        }
    }
    deb(ans);

    return ans;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // int A = 4;
        int A = 5;
        // vvi B = {
        //     {1, 4},
        //     {3, 1},
        //     {4, 3},
        //     {2, 1},
        // };
        vvi B = {
            {1, 2},
            {2, 3},
            {1, 5},
            {2, 4},
        };
        solve(A, B);
    }
    return 0;
}