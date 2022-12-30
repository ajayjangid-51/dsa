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
void solve()
{
    // eg.1(testcase1):
    // int items = 3;
    // int W = 50;
    // vi weights = {10, 20, 40, 30, 50};
    // vi values = {60, 100, 120, 70, 110};

    // eg.2(testcase2):
    int items = 3;
    int W = 50;
    vi weights = {10, 20, 30};
    vi values = {60, 100, 120};

    /* *-------------------------------------------------------------------------------* */
    // method2:- best-implementation( in terms of storetable-implementation of the actual recursive-solution):-

    vvi store(items + 1, vi(W + 1));
    for (int i = 1; i < store.size(); i++)
    {
        for (int j = 1; j < store[0].size(); j++)
        {
            if (weights[i - 1] > j)
            {
                store[i][j] = store[i - 1][j];
            }
            else
            {
                store[i][j] = max(store[i - 1][j], (store[i - 1][j - weights[i - 1]] + values[i - 1]));
            }
        }
    }
    int ans = store[items][W];
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