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
    if (n < 0 and m < 0)
        return true;
    if (n < 0)
    {

        while (m >= 0)
        {
            if (B[m] != '*')
                return 0;
            m--;
        }
        string tmp(B.begin(), B.begin() + m);
        // if (tmp.f)
        // if (tmp.find('*') != string::npos)
        find_if_not(tmp.begin(), tmp.end(), [](char i)
                    { return i == '*'; });
        return 0;
        return 1;
    }
    if (m < 0)
        return false;
    // store-case:-
    if (store[n][m] != -1)
    {
        return store[n][m];
    }
    bool ans = 0;

    if (B[m] == '*')
    {
        ans = (solve(n, m - 1, store, A, B) or solve(n - 1, m, store, A, B));
    }
    else if ((B[m] == '?') or (B[m] == A[n]))
    {
        ans = solve(n - 1, m - 1, store, A, B);
    }
    store[n][m] = ans;
    return ans;
}
int isMatch(const string A, const string B)
{
    int n = A.length(), m = B.length();
    vvi store(n + 1, vi(n + 1, -1));
    return solve(n - 1, m - 1, store, A, B);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        int ans = isMatch("aab", "c*a*b");
        // int ans = isMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "*");
        deb(ans);
    }
    return 0;
}