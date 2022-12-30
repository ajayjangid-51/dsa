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
void dfs(int node, vvi &adj, vb &recStack, vb &visited, bool &res)
{
    if (recStack[node])
    {
        res = 1;
        return;
    }
    recStack[node] = 1;
    visited[node] = 1;

    for (auto x : adj[node])
    {
        if (res)
            return;
        if (!visited[x])
            dfs(x, adj, recStack, visited, res);
        else if (recStack[x])
        {
            res = 1;
            return;
        }
    }
    recStack[node] = 0;
}

int solve(int A, vector<int> &B, vector<int> &C)
{
    vb recStack(A + 2, 0);
    vb visited(A + 2, 0);
    vvi adj(A + 1);
    for (int i = 0; i < B.size(); i++)
    {
        adj[B[i]].push_back(C[i]);
    }
    bool res = 0;
    dfs(1, adj, recStack, visited, res);
    debline(res);

    return !res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi B = {1, 2};
        vi C = {2, 1};
        solve(2, B, C);
    }
    return 0;
}