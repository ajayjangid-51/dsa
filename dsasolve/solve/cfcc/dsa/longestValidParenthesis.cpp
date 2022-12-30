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
    string s("(()");
    int n = s.size();
    if (n < 2)
    {
        print("0");
        return;
    }
    vector<int> dp(n);
    dp[0] = 0;
    // if (s[0] == '(' and s[1] == ')')
    //     dp[1] = 2;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '(')
        {
            dp[i] = 0;
        }
        else
        {
            int inx = i - 1 - dp[i - 1];
            if (inx < 0)
                dp[i] = dp[i - 1]; // see this
            else
            {

                char c = s[i - 1 - dp[i - 1]];
                if (c == '(')
                {
                    dp[i] = dp[i - 1] + 2;
                }
                else
                    dp[i] = dp[i - 1];
            }
        }
    }
    dp.push_back(0);
    linebreak1;
    trav(dp) print(x);
    linebreak1;
    int ans = 0;
    int lastnonzeroat = -1;
    for (int i = 1; i < n; i++)
    {
        if (dp[i + 1] == 0 and i - lastnonzeroat == dp[i])
        {
            lastnonzeroat = i;
            ans += dp[i];
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