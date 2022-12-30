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
bool solve(int n, int m, vvi &store, string A, string B)
{
    // base-cases:-

    // store-case:-
    if (store[n][m] != -1)
    {
        return store[n][m];
    }
    bool ans = 0;
    int lena = A.length();
    int lenb = B.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (solve(store, A.substr(0, i), B.substr(0, i)) and (solve(store, A.substr(i + 1, n - i - 1), B.substr(i + 1, n - i - 1))))
        {
            ans = true;
        }
        if (solve(store, A.substr(n - i - 1, n), B.substr(0, i) and solve(store, A.substr(0, n - i - 2), B.substr(i + 1, n))))
            ans = true;
    }
    store[n][m] = ans;
    return ans;
}
int isScramble(const string A, const string B)
{
    // impossible-cases:-
    if (A.size() != B.size())
        return 0;
    string a = A, b = B;
    sort(range(a));
    sort(range(b));
    if (a != b)
        return 0;

    // store:-
    int n = A.size();
    vvi store(n + 1, vi(n + 1, -1));
    bool res = solve(n - 1, n - 1, store, A, B);
    return res;
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