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
#define vb vector<bool>
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
void dfs(int node, vb &visited, vb &recstack, vii adj, int &cycle)
{
    deb(node);
    if (recstack[node])
    {
        cycle = 1;
        return;
    }
    recstack[node] = 1;
    visited[node] = 1;

    for (auto x : adj[node])
    {
        if (cycle)
            break;
        // if (!visited[x])
        dfs(x, visited, recstack, adj, cycle);
    }
    recstack[node] = 0;
}
int solve(int A, vector<vector<int>> &B)
{
    deb(A);
    vb visited(A + 1, 0);
    vii adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
    }
    trav(adj)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }
    int cycle = 0;
    vb recstack(A + 1, 0);
    deb("bye");
    for (int i = 1; i <= A; i++)
    {
        if (cycle)
            break;
        if (!visited[i])
            dfs(i, visited, recstack, adj, cycle);
    }
    deb(cycle);
    return cycle;
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
        // vii B = {{3, 1}, {3, 4}, {1, 3}, {1, 2}, {2, 5}, {2, 3}, {5, 1}, {2, 1}};
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
        // deb(cycle);
    }
    return 0;
}

/* #define vi vector<int>
#define vb vector<bool>
#define vii vector<vi>
#define trav(m) for (auto x : m)
#define trav2(a) for (auto y : a)

void dfs(int node, vb &visited, vb &recstack, vii &adj, int &cycle)
{
    // deb(node);
    if (recstack[node])
    {
        cycle = 1;
        return;
    }
    recstack[node] = 1;
    visited[node] = 1;

    for (auto x : adj[node])
    {
        if (cycle)
            break;
        dfs(x, visited, recstack, adj, cycle);
    }
    recstack[node] = 0;
}
int Solution::solve(int A, vector<vector<int>> &B)
{
    // deb(A);
    vb visited(A + 1, 0);
    vii adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
    }
    int cycle = 0;
    vb recstack(A + 1, 0);
    // deb("bye");
    for (int i = 1; i <= A; i++)
    {
        recstack.assign(A + 1, 0);
        if (cycle)
            break;
        if (!visited[i])
            dfs(i, visited, recstack, adj, cycle);
    }
    // deb(cycle);
    return cycle;
} */

/* 2.#define vi vector<int>
#define vb vector<bool>
#define vii vector<vi>
#define trav(m) for (auto x : m)
#define trav2(a) for (auto y : a)

void dfs(int node, vb &visited, vb &recstack, vii adj, int &cycle)
{
    // deb(node);
    // if (recstack[node])
    // {
    //     cycle = 1;
    //     return;
    // }
    recstack[node] = 1;
    visited[node] = 1;

    for (auto x : adj[node])
    {
        if (cycle)
            break;
        if(!visited[x])
        dfs(x, visited, recstack, adj, cycle);
        else if(recstack[x]) {
            cycle = 1;
            break;
        }
    }
    recstack[node] = 0;
}
int Solution::solve(int A, vector<vector<int>> &B)
{
    // deb(A);
    vb visited(A + 1, 0);
    vii adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
    }
    int cycle = 0;
    vb recstack(A + 1, 0);
    // deb("bye");
    for (int i = 1; i <= A; i++)
    {
        // recstack.assign(A + 1, 0);
        if (cycle)
            return 1;
        if (!visited[i])
            dfs(i, visited, recstack, adj, cycle);
    }
    // deb(cycle);
    return cycle;
} */