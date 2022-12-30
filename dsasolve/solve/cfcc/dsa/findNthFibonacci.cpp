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
vvi multipyMat(vvi mat, vvi m)
{
    vvl n(2, vi(2));
    n[0][0] = (mat[0][0] * m[0][0] + mat[0][1] * m[1][0]) % MOD;
    n[0][1] = (mat[0][0] * m[1][0] + mat[0][1] * m[1][1]) % MOD;
    n[1][0] = (mat[1][0] * m[0][1] + mat[1][1] * m[1][0]) % MOD;
    n[1][1] = (mat[1][0] * m[1][0] + mat[1][1] * m[1][1]) % MOD;
    return n;
};
vvi fn(vvi mat, int x)
{
    if (x == 1)
        return mat;
    vvi r2 = fn(mat, x / 2);
    vvi r = multiplyMat(r2, r2);
    if (x & 1)
    {
        return multipyMat(mat, r);
    }
    return r;
};
void solve()
{
    int A = 5;
    // // A++
    vvi mat = {{1, 1}, {1, 0}};
    // int t = log2(A);
    // vvi v = {{1, 1},
    //          {1, 0}};
    // for (int i = 1; i < t; i++)
    // {
    //     mat = multipyMat(mat, mat);
    //     // trav(mat)
    //     // {
    //     //     trav2(x) print(y);
    //     //     nline;
    //     // }
    //     // linebreak1;
    // }

    // deb(t);
    // int p = 2 * t;
    // deb(p);
    // int xx = A - p;
    // deb(xx);
    // for (int i = 1; i <= xx; i++)
    // {
    //     mat = multipyMat(mat, v);
    // }
    // trav(mat)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }

    // linebreak1;
    vvi v = fn(mat, A);
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