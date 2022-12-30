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
#define vb vector<bool>
#define vi vector<int>
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
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
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
void dfs(int node, vvi &adj, vb &visited, vb &recStack, bool &res, int parent)
{
    if (recStack[node])
    {
        res = 1;
        return;
    }
    visited[node] = 1;
    recStack[node] = 1;
    for (auto x : adj[node])
    {
        if (res)
            break;
        if (x == parent)
        {
            continue;
        }
        if (!visited[x])
        {
            dfs(x, adj, visited, recStack, res, node);
        }
        else if (recStack[x])
        {
            // if(x == parent) continue;
            // else{
            res = 1;
            return;
            // }
        }
    }
    recStack[node] = 0;
}
int solve(int A, vector<vector<int>> &B)
{
    vvi adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    vb visited(A + 1, 0);
    vb recStack(A + 1, 0);
    bool res = 0;
    dfs(1, adj, visited, recStack, res, -1);
    debline(res);
    return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi B = {
            // {1, 2},
            // {1, 3},
            // {2, 3},
            // {1, 4},
            // {4, 5},
            {1, 2},
            {1, 3},
        };
        solve(3, B);
    }
    return 0;
}