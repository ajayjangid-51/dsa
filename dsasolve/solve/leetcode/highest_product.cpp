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
    vi A = {-70, 10, -67, 21, -40, -48, 19, -8, -59, -45, 47, 1, 93, 44, 93, 11, 1, -14, -32, 73, -85, 43, 93, -71, -45, 23, -44, -66, 24, 98, 0, -40, -11, 20, -94};
    sort(A.begin(), A.end());
    int n = A.size();
    int n1 = abs(A[0]), n2 = abs(A[1]), n3 = A[n - 1], n4 = A[n - 2], n5 = A[n - 3];
    int ans = n3;
    if (A[0] < 0 and A[1] >= 0)
        return ans * n4 * n5;
    if (A[n - 1] < 0)
        return ans * A[n - 2] * A[n - 3];
    ans *= max((n1 * n2), (n4 * n5));
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
        solve();
    }
    return 0;
}