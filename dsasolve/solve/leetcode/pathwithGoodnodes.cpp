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
int ans = 0;
int one = 0;

void dfs(int start, vector<int> B[], vi visited, vi A, int C)
{
    cout << "👻Start = " << start << endl;
    // deb("👻start")
    // process-node:-
    if (visited[start])
        return;
    visited[start] = 1;
    deb(A[start]);
    if (A[start] == 1)
    {
        one++;
    }
    if (B[start].size() == 0) // leaf-node.
    {
        deb("leaf-node");
        deb(start);
        deb(one);
        deb(ans);

        if (one <= C)
            ans++;
        // if (A[start] == 1)
        //     one--;
        deb(ans);
        deb(one);
        deb("leaf-node");
        // if (A[start])
        //     one--;

        // return;

        // return;
    }
    deb(B[start].size());
    for (auto x : B[start])
    {
        if (!visited[x])
        {

            dfs(x, B, visited, A, C);
        }
        // if (A[start])
        //     one--;
        // deb(x);
    }
    if (A[start])
        one--;
    deb(one);
}
int solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    // forming adjancency-matrix:-
    int N = A.size();
    vector<int> adj[N];
    vector<int> visited(N, 0);
    for (auto x : B)
    {
        // if (x[0] > x[1])
        // {
        deb(x[0]);
        deb(x[1]);
        if (x[0] > x[1])
        {
            adj[x[1]].push_back(x[0]);
        }
        else
        {
            adj[x[0]].push_back(x[1]);
        }

        // }

        // adj[x[1]].push_back(x[0]);
        //    adj[x[0]].push_back(x[1]);
    }
    trav(adj)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }

    dfs(0, adj, visited, A, C);
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
        // vi A = {0, 1, 0, 1, 1, 1};
        vi A = {1, 1, 1, 0, 1, 0, 1, 0};
        // vi A = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1};
        // vector<vi> B = {{0, 1}, {0, 4}, {0, 5}, {1, 2}, {1, 3}};
        vector<vi> B = {{8, 2}, {6, 3}, {5, 2}, {3, 1}, {4, 2}, {7, 2}, {2, 1}};
        // vector<vi> B = {{9, 5}, {2, 1}, {11, 6}, {8, 4}, {1, 0}, {7, 2}, {6, 0}, {3, 1}, {5, 2}, {10, 3}, {4, 2}, {12, 10}};
        solve(A, B, 2);
    };
    return 0;
}
