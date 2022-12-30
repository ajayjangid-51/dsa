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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
    // vi A = {1, 3, 4, 7, 10, 12};
    // vi B = {2, 3, 6, 15};
    vi A = {1, 4, 5};
    vi B = {2, 3};
    int m = A.size(), n = sz(B);
    print(m), print(n);
    int l1 = ((m + n) / 2) - 2;

    int l2 = 0, r1 = l1 + 1, r2 = l2 + 1;
    deb(l1);
    deb(l2);
    deb(r1);
    deb(r2);

    while (1)
    {
        if ((A[l1] < B[r2]) and (B[l2] < A[r1]))
        {
            int ans = (max(A[l1], B[l2]) + min(A[r1], B[r2])) / 2;
            if ((m + n) & 1)
                ans = min(A[r1], B[r2]);
            deb(ans);
            return;
        }
        else
        {
            l1--;
            l2++;
            r1 = l1 + 1;
            r2 = l2 + 1;
        }
    }
    deb("😀");
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