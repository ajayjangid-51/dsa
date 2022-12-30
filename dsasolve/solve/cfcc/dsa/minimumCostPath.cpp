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
int n = 4;

vvi dp(4, vi(4, INT_MAX));
vvi A = {
    {9, 4, 9, 9},
    {6, 7, 6, 4},
    {8, 3, 3, 7},
    {7, 4, 9, 10}};

vector<vector<bool>> visited(n, vector<bool>(n, 0));

int fn(int i, int j)
{
    print(i), print(j), nline;
    // debline(i);
    // debline(j);
    // nline;
    // linebreak1;
    if (i == (n - 1) and j == (n - 1))
    {
        // print("hi");
        dp[i][j] = A[i][j];
        return A[i][j];
    }
    // print(i), print(j);
    int i1 = i, j1 = j - 1;
    int i2 = i, j2 = j + 1;
    int i3 = i - 1, j3 = j;
    int i4 = i + 1, j4 = j;
    // int ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX, ans4 = INT_MAX;
    int ans1 = 100000, ans2 = 100000, ans3 = 100000, ans4 = 100000;
    // ans1 mtlb left , ans2 mtlb right , ans3 mtlb down and 4 mtlb up.
    if ((i1 >= 0 and i1 <= n) and (j1 >= 0 and j1 <= n) and !visited[i1][j1])
    {
        // print("😀");
        visited[i1][j1] = 1;
        ans1 = min(ans1, fn(i1, j1));

        visited[i1][j1] = 0;
    }
    if ((i2 >= 0 and i2 <= n) and (j2 >= 0 and j2 <= n) and !visited[i2][j2])
    {
        // print("🏋️");
        visited[i2][j2] = 1;
        ans2 = min(ans2, fn(i2, j2));
        visited[i2][j2] = 0;
    }
    if ((i3 >= 0 and i3 <= n) and (j3 >= 0 and j3 <= n) and !visited[i3][j3])
    {
        // print("🚀");
        visited[i3][j3] = 1;
        ans3 = min(ans3, fn(i3, j3));
        visited[i3][j3] = 0;
    }
    if ((i4 >= 0 and i4 <= n) and (j4 >= 0 and j4 <= n) and !visited[i4][j])
    {
        // print("🚌");
        visited[i4][j4] = 1;
        ans4 = min(ans4, fn(i4, j4));
        visited[i4][j4] = 0;
    }
    // visited[i][j] = 0;
    // deb(A[i][j]);
    // deb(ans1);
    // deb(ans2);
    // deb(ans3);
    // deb(ans4);
    dp[i][j] = A[i][j] + min((min(ans1, ans2)), (min(ans3, ans4)));
    return dp[i][j];
}
void solve()
{
    int ans = fn(0, 0);
    visited[0][0] = 1;
    // deb(dp[0][0]);
    deb(ans);
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