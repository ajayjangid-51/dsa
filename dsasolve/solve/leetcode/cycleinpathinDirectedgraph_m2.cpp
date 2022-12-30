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
bool cycle = false;
int nodi;
void dfs(int node, int initial, vii adj)
{
    deb(node);
    if (node == initial)
    {
        cycle = true;
        return;
    }
    for (auto x : adj[node])
    {
        if (cycle)
            break;
        dfs(x, nodi, adj);
    }
}
int solve(int A, vector<vector<int>> &B)
{
    vii adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
    }
    trav(adj)
    {
        trav2(x) cout << y << ' ';
        cout << endl;
    }
    for (int i = 1; i <= adj.size(); i++)
    {
        int tt = i;
        cout << i << endl;
        // deb(adj[i].size());
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j];
        }
        // trav(adj[i]) deb(x);
    }
    // for (int node = 1; node <= A; node++)
    // {
    //     if (cycle)
    //         break;
    //     nodi = node;
    //     cout << "👻dfs(" << node << ")" << endl;
    //     dfs(node, -1, adj);
    // }
    return 9;
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
        // vii B = {{1, 2}, {2, 5}, {4, 1}, {1, 3}, {3, 4}};
        vii B = {{1, 4},
                 {2, 1},
                 {4, 3},
                 {4, 5},
                 {2, 3},
                 {2, 4},
                 {1, 5},
                 {5, 3},
                 {2, 5},
                 {5, 1},
                 {4, 2},
                 {3, 1},
                 {5, 4},
                 {3, 4},
                 {1, 3},
                 {4, 1},
                 {3, 5},
                 {3, 2},
                 {5, 2}};

        solve(A, B);
        deb(cycle);
    }
    return 0;
}