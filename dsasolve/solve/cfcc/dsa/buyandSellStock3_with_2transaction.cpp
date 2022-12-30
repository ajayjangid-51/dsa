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
    // vi v = {30, 40, 45, 50, 45, 20, 25, 40, 80, 50, 30, 15, 10, 20, 40, 45, 70, 50, 55};
    // vi v = {3, 3, 5, 0, 0, 3, 1, 4};
    // vi v = {1, 2, 3, 4, 5};
    vi v = {7, 6, 4, 3, 1};
    int n = v.size();
    vi fp(n, 0);
    vi sp(n, 0);
    int least = INT_MAX;
    int mxp1 = 0;
    int maxi = INT_MIN;
    int mxp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < least)
            least = v[i];
        mxp1 = max((v[i] - least), mxp1);
        fp[i] = mxp1;
    }
    nline;
    trav(fp) print(x);
    nline;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
            maxi = v[i];
        mxp2 = max(maxi - v[i], mxp2);
        sp[i] = mxp2;
    }
    linebreak1;
    trav(sp) print(x);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(fp[i] + sp[i], ans);
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