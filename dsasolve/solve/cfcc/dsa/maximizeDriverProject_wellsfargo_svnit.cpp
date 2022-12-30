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
    vvi v = {{10, 20}, {40, 100}, {200, 210}, {20, 230}};
    vector<pair<int, int>> store(v.size() + 1);
    store[0] = {0, 0};
    store[1] = {v[0][0], v[0][1]};
    for (int i = 1; i < v.size(); i++)
    {
        int j = i + 1;
        store[j].first = v[i][0] + max(store[j - 1].first, store[j - 1].second);
        store[j].second = v[i][1] + max(store[j - 2].first, store[j - 2].second);
    }
    deb(store[v.size()].first);
    deb(store[v.size()].second);
    vector<pair<int, int>> v = {{10, 20}, {40, 100}, {200, 210}, {20, 230}};
    int n = v.size();

    vector<vector<int>> dp(n, vector<int>(3, 0));
    // dp[i][0]: no ride on i'th day
    // dp[i][1]: in-city ride on i'th day
    // dp[i][2]: inter-city ride on i'th day

    dp[0][0] = 0;
    dp[0][1] = v[0].first;
    dp[0][2] = v[0].second;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        dp[i][1] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + v[i].first;
        dp[i][2] = dp[i - 1][0] + v[i].second;
    }
    int ans = max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
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