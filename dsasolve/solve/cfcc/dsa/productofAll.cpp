#include <bits/stdc++.h>
using namespace std;

#define f first
// #define s second
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
    // vi A = {1, 2, 3, 4};
    vi A = {
        1, 132, 756, 459, 533, 219, 48, 679, 680, 935, 384, 520, 831, 35, 54, 530, 672, 8, 384, 67, 418, 687, 589, 931, 847, 527, 92, 654, 416, 702, 911, 763, 263, 48, 737, 329, 633, 757, 992, 366, 248, 983, 723, 754, 652, 73, 632, 885, 273, 437, 767, 478, 238, 275, 360, 167, 487, 898, 910, 61, 905, 505, 517, 320, 987, 494, 267, 91, 948, 74, 501, 385, 278, 914, 530, 465, 941, 51, 762, 771, 828, 126, 16, 689, 869, 630, 737, 726, 1000, 889, 234, 307, 352, 514, 592, 846, 413, 842, 270, 416};
    int n = A.size();
    vi B(n);
    vector<long long> p(n), s(n);
    p[0] = 1;
    s[n - 1] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        p[i + 1] = (A[i] * p[i]) % MOD;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        s[i - 1] = (A[i] * s[i]) % MOD;
    }
    trav(p) print(x);
    nline;
    trav(s) print(x);
    linebreak1;
    for (int i = 0; i < n; i++)
    {
        B[i] = (p[i] * s[i]) % MOD;
    }
    linebreak1;
    trav(B) print(x);
    nline;
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