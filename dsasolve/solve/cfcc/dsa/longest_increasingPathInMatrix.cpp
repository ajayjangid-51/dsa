#include <bits/stdc++.h>
using namespace std;

#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
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
int dfs(int i, int j, vvi &v, vvi &dp)
{
    int n = v.size();
    int m = v[0].size();
    if (dp[i][j])
        return dp[i][j];

    int ans = 1;
    vvi dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dir[k][0];
        int j1 = j + dir[k][1];
        if (i1 < 0 or j1 < 0 or i1 >= n or j1 >= m)
        {
            continue;
        }
        if (v[i1][j1] <= v[i][j])
        {
            continue;
        }
        ans = max(ans, dfs(i1, j1, v, dp) + 1);
    }
    return dp[i][j] = ans;
}
void solve()
{
    vvi v = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    int n = v.size();
    if (!n)
    {
        debline("0");
        return;
    }
    int m = v[0].size();
    vvi dp(n, vi(m, 0));
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = dp[i][j];
            if (!dp[i][j])
            {

                ans = dfs(i, j, v, dp);
            }
            maxi = max(maxi, ans);
            // debline(ans);
        }
    }
    debline(maxi);
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}