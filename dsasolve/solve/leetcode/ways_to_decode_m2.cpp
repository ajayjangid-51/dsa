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
#define MOD 1000000007
vector<int> store(100000, -1);
int solve(int n, int num, string &A)
{
    if (n <= 0)
    {
        if (A[0] == '0')
            return 0;
        else
            return 1;
    }
    if (store[n] != -1)
        return store[n];
    int ans = 0;
    int num1 = A[n] - '0';
    if (num1 != 0)
        ans = solve(n - 1, num1, A);
    if (num1 == 0 and A[n - 1] - '0' == 0)
        return 0;

    int num2 = ((A[n - 1] - '0') * 10) + num1;
    if (num2 <= 26 and num2 > 9)
    {
        ans = (ans + solve(n - 2, num2, A)) % MOD;
    }
    store[n] = ans;

    return ans;
}
int numDecodings(string A)
{
    store.assign(100000, -1);
    if (A.size() == 0)
        return 0;

    int ans = solve(A.size() - 1, -1, A);
    deb(ans);
    return ans;
}
// time-complexity-failed bcoz of recursive-implementation.
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        numDecodings("2611055971756562");
    }
    return 0;
}
// time-complexity-not-failed bcoz of recursive-implementation.