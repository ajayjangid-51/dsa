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
void solve()
{
    int n, d;
    long long c;
    cin >> n >> c >> d;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());

    int l = 0, r = d + 2;

    while (l < r)
    {
        int mid = l + (r - l + 1) / 2;
        // int mid = (l + r) / 2;
        long long tot = 0;
        for (int i = 0; i < d; i++)
        {
            if (i % mid < n)
            {
                tot += a[i % mid];
            }
        }
        if (tot >= c)
        {
            l = mid;
        }
        else
            r = mid - 1;
    }
    if (l == d + 2)
    {
        cout << "Infinity\n";
        return;
    }
    if (l == 0)
    {
        cout << "Impossible\n";
        return;
    }
    cout << l - 1 << '\n';
}
int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}