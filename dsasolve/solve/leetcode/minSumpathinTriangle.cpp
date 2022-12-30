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
int solve(int n, int m, vvi &store, vvi &A)
{
    // base-cases:-
    if (n == 0 and m == 0)
        return A[0][0];
    // store-case:-
    if (store[n][m] != -1)
    {
        return store[n][m];
    }
    int ans = INT_MAX;
    for (int i = 0; i < A[n - 1].size(); i++)
    {
        // deb(A[n - 1].size());
        int tmp = A[n][m] + solve(n - 1, i, store, A);
        // int tmp = solve(n - 1, i, store, A);
        // debline(tmp);
        // tmp += A[n][m];
        // debline(tmp);
        ans = min(ans, tmp);
    }
    // linebreak;
    // deb(n);
    // deb(m);
    store[n][m] = ans;
    return ans;
}

int minimumTotal(vector<vector<int>> &A)
{
    int n = A.size();
    vvi store(n + 1, vi(n + 1, -1));
    // int x = solve(n - 1, 0, store, A);
    // int ans = x;
    // x -= A[n - 1][0];
    // for (int i = 1; i < A[n - 1].size(); i++)
    // {
    //     ans = min(ans, x + A[n - 1][i]);
    // }
    int ans = INT_MAX;
    for (int i = 0; i < A[n - 1].size(); i++)
    {
        deb(A[n - 1][i]);
        // int nn = n - 1;
        int tmp = solve(n - 1, i, store, A);
        deb(tmp);
        ans = min(ans, tmp);
        // ans = min(ans, x + A[n - 1][i]);
    }
    debline(ans);
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vvi A = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
        // vvi A = {{2}, {6, 6}, {7, 8, 4}};
        vvi A = {{9}, {3, 8}, {0, 2, 4}, {8, 3, 9, 0}, {5, 2, 2, 7, 3}, {7, 9, 0, 2, 3, 9}, {9, 7, 0, 9, 9, 8, 6}, {5, 7, 6, 2, 7, 0, 3, 9}};
        int xx = minimumTotal(A);
        // debline(xx);
    }
    return 0;
}