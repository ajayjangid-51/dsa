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
int solve()
{
    vector<int> A = {11, 7, 11, 17, 12, 12, 16, 10, 11};
    int B = 4;

    int m = B, n = A.size();
    deb(m);
    deb(n);

    vector<vector<int>> store(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        int maxx = INT_MIN;
        for (int j = 1; j < n; j++)
        {
            maxx = max(maxx, store[i][j - 1]);
            for (int k = 0; k < j; k++)
            {
                maxx = max(maxx, (store[i - 1][k] + (A[j] - A[k])));
            }
            store[i][j] = maxx;
        }
    }
    trav(store)
    {
        trav2(x) print(y);
        nline;
    }
    debline(store[m][n - 1]);
    return store[m][n - 1];
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