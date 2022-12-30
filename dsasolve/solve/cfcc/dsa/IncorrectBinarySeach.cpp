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
bool fn(int l, int r, int i)
{
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (i < mid)
        {
            r = mid - 1;
        }
        else if (i > mid)
        {
            l = mid + 1;
        }
        else
            return 1;
    }
    return 0;
}
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }

    if (x < 0)
        x += m0;

    return x;
}
void solve()
{
    // vvi A = {{2, 9}};
    vvi A = {{10, 10}, {10, 12}};
    vector<int> ans;
    for (int i = 0; i < A.size(); i++)
    {
        int cnt = 0;
        int sz = (A[i][1] - A[i][0]) + 1;
        deb(sz);
        for (int j = A[i][0]; j <= A[i][1]; j++)
        {
            bool t = fn(A[i][0], A[i][1], j);
            if (!t)
                cnt++;
        }
        deb(cnt);

        int xx = modInverse(sz, 1000000007);
        deb(xx);
        // int xx = 10000;
        xx = (xx % 1000000007 * cnt % 1000000007) % 1000000007;
        ans.push_back(xx);
    }
    // deb(ans);
    linebreak1;
    trav(ans) print(x);
    linebreak1;
    // return ans;
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