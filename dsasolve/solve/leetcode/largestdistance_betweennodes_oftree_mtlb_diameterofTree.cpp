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
int maxi = 0;
int nodi;
// int cnode;
int dist = 0;
void dfs(int node, int nodedistance, vector<vi> adj, vi &visited)
{
    deb(node);
    if (visited[node])
        return;

    if (adj[node].size() == 1)
    {
        deb("hi");
        deb(node);
        deb(nodedistance);
        if (maxi < nodedistance)
        {

            maxi = nodedistance;
            nodi = node;
        }
        // return;
    }
    visited[node] = 1;
    for (auto x : adj[node])
    {
        if (!visited[x])
            dfs(x, nodedistance + 1, adj, visited);
    }
}
int solve(vector<int> &A)
{
    // dfs();
    int n = A.size();
    vii adj(n);
    int root;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != -1)
        {

            adj[A[i]].push_back(i);
            adj[i].push_back(A[i]);
        }
        else
        {
            root = i;
        }
    }
    int a, b, c;
    vi visited(n, 0);
    dfs(root, 0, adj, visited);
    b = maxi;
    deb(b);
    deb(nodi);
    maxi = 0;
    // vi visited2(n, 0);
    visited.assign(n, 0);
    cout << "😀😀😀😀 dfs-2 starting..." << endl;
    dfs(nodi, 0, adj, visited);
    deb(maxi);
    deb(c);
    deb(nodi);
    return 1;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi A = {-1, 0, 0, 0, 3};
        // vi A = {-1, 0, 0, 0, 0, 2, 3, 4, 6, 7, 8, 9, 11};
        vi A = {-1, 0, 0, 1, 2, 1, 5};
        solve(A);
    }
    return 0;
}