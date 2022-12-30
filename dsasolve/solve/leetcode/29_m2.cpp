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

void Solve()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    if (dividend == INT_MIN and divisor == -1)
    {
        deb(INT_MAX);
        return;
    }
    int sign = ((dividend > 0) ^ (divisor > 0)) ? -1 : 1;
    long dvd = labs(dividend), dvr = labs(divisor);
    long ans = 0;
    while (dvd >= dvr)
    {
        long temp = dvr, m = 1;
        while (temp << 1 <= dvd)
        {
            temp = temp << 1;
            m = m << 1;
        }
        dvd -= temp;
        ans += m;
    }
    deb(sign * ans);
}

int main()
{
    io_faster
    file();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}