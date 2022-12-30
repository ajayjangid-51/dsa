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
// int ans = 0;
// int one = 0;

void dfs(int start, vector<int> B[], vi visited, vi A, int C, int &one, int &ans)
{

    // process-node:-
    if (visited[start])
        return;
    visited[start] = 1;
    if (A[start] == 1)
    {
        one++;
    }
    if (one > C)
        return;

    if (B[start].size() == 0) // leaf-node.
    {

        if (one <= C)
            ans++;
    }
    for (auto x : B[start])
    {
        if (!visited[x])
        {

            dfs(x, B, visited, A, C, one, ans);
        }
    }
    if (A[start])
        one--;
}
int solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    // forming adjancency-matrix:-
    int one = 0;
    int ans = 0;
    int N = A.size();
    vector<int> adj[N];
    vector<int> visited(N, 0);
    for (auto x : B)
    {

        int a = x[0] - 1, b = x[1] - 1;
        if (a > b)
        {
            adj[b].push_back(a);
        }
        else
        {
            adj[a].push_back(b);
        }
    }

    dfs(0, adj, visited, A, C, one, ans);
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
        // vi A = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1};
        // vector<vi> B = {{0, 1}, {0, 4}, {0, 5}, {1, 2}, {1, 3}};
        // vector<vi> B = {{7, 1}, {5, 2}, {4, 1}, {2, 0}, {3, 1}, {6, 1}, {1, 0}};
        vi A = {1, 1, 1, 0, 1, 0, 1, 0};
        vector<vi> B = {{8, 2}, {6, 3}, {5, 2}, {3, 1}, {4, 2}, {7, 2}, {2, 1}};

        solve(A, B, 2);
        cout << "the answer is" << endl;
        // deb(ans);
    }
    return 0;
}