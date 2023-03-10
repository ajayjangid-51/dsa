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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
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
int solve(int n, int m, vvi &store, string &A, string &B)
{
    // if(m>n) return 0;
    if (n < 0 and m < 0)
        return 1;
    if (m < 0)
        return 1;
    if (n < 0)
        return 0;

    // if(n<0 or m<0) return 0;
    if (store[n][m] != -1)
    {
        return store[n][m];
    }
    int ans;
    if (A[n] != B[m])
    {
        ans = solve(n - 1, m, store, A, B);
    }
    else
    {
        ans = (solve(n - 1, m - 1, store, A, B) + solve(n - 1, m, store, A, B));
    }
    store[n][m] = ans;
    // deb(ans);

    return ans;
}
int numDistinct(string A, string B)
{
    int n = A.size();
    int m = B.size();
    if (m > n)
        return 0;
    vvi store(n + 1, vi(n + 1, -1));
    int len = solve(n - 1, m - 1, store, A, B);
    deb(len);
    return len;
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
        numDistinct("baabbaaabaaabaaaabbbbabaaabbbabbba", "bab");
    }
    return 0;
}