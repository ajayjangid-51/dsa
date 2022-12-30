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
    vi A = {-50, -41, -40, -19, 5, 21, 28};
    // vi A = {50, 41, -40, 19, 5, 21, 28};
    vi B = {50, -21, -10};
    // vi B = {50, 21, 10};
    // vi A = {1, -3, 5};
    // vi B = {2, 6, 9};
    int n = A.size(), m = B.size();
    int sz = n + m;
    int szz = ((n + m) / 2) + 1;
    if (sz % 2 == 0)
    {
        int mini = min(A[0], B[0]);
        int maxi = max(A[n - 1], B[m - 1]);
        deb(mini);
        deb(maxi);
        while (mini < maxi)
        {
            int mid = (maxi + mini) / 2;
            int cnt = 0;
            cnt += upper_bound(A.begin(), A.end(), mid) - A.begin();
            cnt += upper_bound(B.begin(), B.end(), mid) - B.begin();
            if (cnt < szz)
                mini = mid + 1;
            else
                maxi = mid;
        }
        debline(mini);
    }
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