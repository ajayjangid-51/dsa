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
int solve(int start, int end, vvi &store, string &s)
{
    // base-cases:-
    // 1. if there is only one character ..
    if (start == end)
        return 1;
    // case2. if there are only two characters and both are same.
    if (s[start] == s[end] and start + 1 == end)
        return 2;
    // store-case:-
    if (store[start][end] != -1)
    {
        return store[start][end];
    }

    int ans;
    if (s[end] == s[start])
    {
        ans = solve(start + 1, end - 1, store, s) + 2;
    }
    else
    {
        ans = max(solve(start, end - 1, store, s), solve(start + 1, end, store, s));
    }
    store[start][end] = ans;
    return ans;
}
void rlps(string s1)
{
    vvi store(s1.length() + 1, vi(s1.length() + 1, -1));
    int len = solve(0, s1.length() - 1, store, s1);
    deb(len);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        rlps("bebeeed");
    }
    return 0;
}