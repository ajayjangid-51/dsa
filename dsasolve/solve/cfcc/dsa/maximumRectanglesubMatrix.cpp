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
    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<pii>> dp(n, vector<pii>(m, {0, 0})); // pii{row, col}
    trav(dp)
    {
        trav2(x) print("("), print(y.first), print(y.second), print(")");
        nline;
    }
    dp[1][4] = {2, 1};
    int ans = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            pii a = dp[i + 1][j], b = dp[i + 1][j + 1], c = dp[i][j + 1];
            int ansd = (a.first + 1) * a.second;
            int ansdia = (b.first + 1 * (b.second + 1));
            int ansr = ((c.first * (c.second + 1)));
            int down = 0, diagonal = 0, right = 0;
            if ((c.second >= a.second - 1 and b.second >= a.second - 1) and (b.first >= 1 and c.first >= 1))
                down = ansd;
            if ((a.first >= b.first - 1 and c.first >= b.first - 1) and (c.second >= b.second - 1 and a.second >= 1))
                right = ansr;
            if ((matrix[i][j - 1] != '0' and a.first >= c.first) and (matrix[i - 1][j] != '0' and b.second >= c.second))
                diagonal = ansdia;
            int maxi = max(down, max(right, diagonal));
            ans = max(maxi, ans);
            if (maxi == down)
                dp[i][j] = {a.first + 1, a.second};
            else if (maxi == diagonal)
                dp[i][j] = {c.first + 1, c.second + 1};
            else
                dp[i][j] = {b.first, b.second + 1};
        }
    }
    debline(ans);
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