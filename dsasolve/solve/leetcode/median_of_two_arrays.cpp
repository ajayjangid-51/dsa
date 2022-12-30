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
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
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
double solve()
{
    vi A = {-50, -41, -40, -19, 5, 21, 28};
    vi B = {-50, -21, -10};
    vector<int> b = A;
    for (auto x : B)
    {
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    trav(b) print(x);
    linebreak;
    if (b.size() % 2 == 0)
    {
        double a = double(b[(b.size()) / 2]) + double(b[((b.size()) / 2) - 1]);
        int n = b.size();
        deb(b[n / 2]);
        deb(n);
        deb(n / 2);
        // deb(b[n])
        deb(b[(b.size()) / 2]);
        deb(b[((b.size()) / 2) - 1]);
        debline(a);
        debline(a / 2);
        return (a / 2);
        // return 1;
    }
    return b[b.size() / 2];
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;43
    while (t--)
    {
        solve();
    }
    return 0;
}