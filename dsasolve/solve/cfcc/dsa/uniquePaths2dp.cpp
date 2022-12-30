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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
void solve()
{
    vvi obstacleGrid = {{1, 0}};
    vector<vector<int>> dp = obstacleGrid;
    int m = dp.size(), n = dp[0].size();
    dp[m - 1][n - 1] = (dp[m - 1][n - 1] == 1) ? 0 : 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (dp[m - 1][i] == 1)
        {
            print("☘️");
            dp[m - 1][i] = 0;
        }
        else
        {
            dp[m - 1][i] = dp[m - 1][i + 1];
        }
    }
    trav(dp)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
    for (int i = m - 2; i >= 0; i--)
    {
        if (dp[i][n - 1] == 1)
        {
            print("❤️‍🔥");
            dp[i][n - 1] = 0;
        }
        else
        {
            print("😀");
            dp[i][n - 1] = dp[i + 1][n - 1];
        }
    }

    trav(dp)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            if (dp[i][j] == 1)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j + 1];
            }
        }
    }

    trav(dp)
    {
        trav2(x) print(y);
        nline;
    }
    deb(dp[0][0]);
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