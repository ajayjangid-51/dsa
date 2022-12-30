// as short-implementation... is also important: bcoz code is understandalbe , easy and fast to write.
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
vi x = {-1, -1, -1, 0, 0, 1, 1, 1};
vi y = {1, 0, -1, 1, -1, 1, 0, -1};

void dfs(pii node, int &maxi, vvb &visited, int &N, int &M, vvi &A)
{
    int i = node.first, j = node.second;
    visited[i][j] = 1;
    maxi = maxi + 1;

    for (int k = 0; k < 8; k++)
    {
        int a = i + x[k];
        int b = j + y[k];
        if (a >= 0 and a < N and b >= 0 and b < M and A[a][b] == 1 and !visited[a][b])
        {
            dfs({a, b}, maxi, visited, N, M, A);
        }
    }
}
int solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    vvb mvisited(N, vb(M, 0));
    int maxi = 0;
    vvb visited(N, vb(M, 0));
    int maxx = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!mvisited[i][j] and A[i][j] == 1)
            {
                mvisited[i][j] = 1;
                dfs({i, j}, maxi, visited, N, M, A);
                maxx = max(maxx, maxi);
                maxi = 0;
            }
        }
    }
    deb(maxx);
    return maxx;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi A = {
            {0, 0, 1, 1, 0},
            {1, 0, 1, 1, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 0, 0, 1},
        };
        solve(A);
    }
    return 0;
}