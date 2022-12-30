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
void dfs(int node, int goods, int &ans, vector<bool> &visited, vector<vector<int>> adj, vector<int> A, int C)
{
    deb(node);
    if (visited[node])
        return;
    visited[node] = 1;
    for (auto x : adj[node])
    {
        if (!visited[x])
            dfs(x, goods + A[node - 1], ans, visited, adj, A, C);
    }
    if (adj[node].size() == 1)
    {
        if (goods + A[node - 1] <= C)
        {
            ans++;
        }
    }
}
int solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    int ans = 0;
    int n = A.size();
    vector<bool> visited(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    // creating adj-list from edgelist:-
    for (auto x : B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    int start = 1;
    dfs(start, 0, ans, visited, adj, A, C);
    deb(ans);
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    // while (t--)
    // {
    vi A = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1};
    vector<vi> B = {{10, 6},
                    {3, 2},
                    {12, 7},
                    {9, 5},
                    {2, 1},
                    {8, 3},
                    {7, 1},
                    {4, 2},
                    {6, 3},
                    {11, 4},
                    {5, 3},
                    {13, 11}};
    solve(A, B, 7);
    // }
    return 0;
}

void dfs(int node, int goods, int &ans, vector<bool> &visited, vector<vector<int>> adj, vector<int> A, int C)
{
    if (goods + A[node - 1] > C)
        return;
    // if(visited[node]) return;
    if (adj[node].size() == 1 and (goods + A[node - 1]) <= C and (!visited[node]))
    {
        // if(goods+A[node-1]<= C){
        ans++;
        // }
        return;
    }
    visited[node] = 1;
    for (auto x : adj[node])
    {
        if (!visited[x])
            dfs(x, goods + A[node - 1], ans, visited, adj, A, C);
    }
    // if(adj[node].size() == 1){
    //     if(goods+A[node-1]<= C){
    //         ans++;
    //     }
    // }
}
int Solution::solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    int ans = 0;
    int n = A.size();
    vector<bool> visited(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    // creating adj-list from edgelist:-
    for (auto x : B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    int start = 1;
    dfs(start, 0, ans, visited, adj, A, C);
    return ans;
}

void dfs(vector<int> &A, vector<bool> &visited, int C, int u, vector<vector<int>> &adj, int &count, int good)
{
    //general Node
    if (good + A[u - 1] > C)
        return;

    //leaf Node
    if (adj[u].size() == 1 && !visited[u] && C >= good + A[u - 1])
    {
        count++;
        return;
    }

    //else go forward
    visited[u] = true;

    for (int i = 0; i < adj[u].size(); i++)
    {
        if (!visited[adj[u][i]])
        {
            dfs(A, visited, C, adj[u][i], adj, count, good + A[u - 1]);
        }
    }
    return;
}

int Solution::solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    int count = 0;
    vector<bool> visited(A.size() + 1, false);
    vector<vector<int>> adj(A.size() + 1);
    for (int i = 0; i < B.size(); i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }

    dfs(A, visited, C, 1, adj, count, 0);
    return count;
}