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
#define vii vector<vi>
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
bool dfs(int node, vi &visited, vii adj)
{
    deb(node);
    if (visited[node])
        return 0;
    visited[node] = 1;

    for (auto x : adj[node])
    {
        if (!dfs(x, visited, adj))
            break;
    }
    return 1;
}

int solve(int A, vector<vector<int>> &B)
{
    vii adj(A + 1);
    vi visited(A + 1, 0);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
    }

    // dfs();
    for (int i = 1; i < A + 1; i++)
    {
        if (dfs(1, visited, adj))
            return 1;
    }
    return 0;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int A = 5;
        vii edgelist = {
            {1, 2},
            {4, 1},
            {2, 4},
            {3, 4},
            {5, 2},
            {1, 3}};

        cout << solve(A, edgelist);
    }
    return 0;
}