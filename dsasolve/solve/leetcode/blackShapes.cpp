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
vi X = {0, -1, 1, 0};
vi Y = {-1, 0, 0, 1}; // left , up , down , right;
void dfs(pii node, vvb &visited, int &m, int &n, vector<string> &A)
{
    debpair(node);
    visited[node.first][node.second] = 1;

    for (int i = 0; i < 4; i++)
    {
        int x = node.first + X[i];
        int y = node.second + Y[i];
        if (x >= 0 and x < m and y < n and y >= 0 and A[x][y] == 'X' and !visited[x][y])
        {
            dfs({x, y}, visited, m, n, A);
        }
    }
}

int black(vector<string> &A)
{
    // here simply we have to find no.of connected-components , where connected-components are the Graph of X-nodes.

    int ans = 0;
    int m = A.size(), n = A[0].length();
    vvb visited(m, vb(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == 'X' and !visited[i][j])
            {
                dfs({i, j}, visited, m, n, A);
                ans++;
            }
        }
    }
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
        vector<string> A = {
            "OOOXOOO",
            "OOXXOXO",
            "OXOOOXO",
        };
        black(A);
    }
    return 0;
}