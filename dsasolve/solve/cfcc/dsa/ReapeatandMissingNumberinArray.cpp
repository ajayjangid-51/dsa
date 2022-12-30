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
    const vi v = {3, 2, 1, 5, 3};
    long long n = v.size();
    long long sum = (n * (n + 1)) / 2;
    long long tsum = 0;
    long long squareSum = (n * (n + 1) * ((2 * n) + 1)) / 6;
    long long tsquareSum = 0;

    trav(v)
    {
        tsum += x;
        long long t = (long long)x * x;
        tsquareSum += t;
    }
    deb(sum);
    deb(tsum);
    deb(squareSum);
    deb(tsquareSum);
    long long AminusB = tsum - sum;
    long long AplusB = (tsquareSum - squareSum) / AminusB;

    deb(AminusB);
    deb(AplusB);
    int a = (AminusB + AplusB) / 2;
    int b = AplusB - a;
    deb(a);
    deb(b);
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