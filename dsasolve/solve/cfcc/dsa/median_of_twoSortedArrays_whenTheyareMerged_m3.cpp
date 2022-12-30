#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define size(x) x.size()

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
    // vi B = {2, 3, 6, 15};
    // vi A = {1, 3, 4, 7, 10, 12};
    vi A = {};
    vi B = {20};
    int m = size(A), n = size(B);
    deb(m), deb(n);
    int minhalfPartSize = min(m, (m + n) / 2);
    int halfPartSize = (m + n) / 2; //  for even and odd both.
    deb(minhalfPartSize);
    deb(halfPartSize);
    int i = 0, j = minhalfPartSize;
    deb(i), deb(j);
    int l1, r1, l2, r2;
    while (i < j)
    {
        int upperPartSize = ((i + j) / 2);
        int lowerPartSize = halfPartSize - upperPartSize;
        if (upperPartSize == 0)
        {
            l1 = INT_MIN;
            if (lowerPartSize == n)
            {
                r2 = INT_MAX;
            }
            else
            {
                r2 = B[lowerPartSize];
            }
            if (n >= 1)
                l2 = B[lowerPartSize - 1];
            else
                l2 = INT_MIN;
            if (m != 0)
                r1 = A[upperPartSize];
            else
                r1 = INT_MAX;
        }
        else if (upperPartSize == m)
        {
            r1 = INT_MAX;
            l2 = INT_MIN;
            if (m >= 1)
                l1 = A[upperPartSize - 1];
            else
                l1 = INT_MIN;
            if (n != 0)
                r2 = B[lowerPartSize];
            else
                r2 = INT_MAX;
        }
        else
        {
            if (m >= 1)
                l1 = A[upperPartSize - 1];
            else
                l1 = INT_MIN;
            if (n >= 1)
                l2 = B[lowerPartSize - 1];
            else
                l2 = INT_MIN;
            if (m != 0)
                r1 = A[upperPartSize];
            else
                r1 = INT_MAX;
            if (n != 0)
                r2 = B[lowerPartSize];
            else
                r2 = INT_MAX;
        }
        if (l1 <= r2 and l2 <= r1)
        {
            int ans = (max(l1, l2) + min(r1, r2)) / 2;
            if ((m + n) & 1)
            {
                // ood;
                ans = min(r1, r2);
            }
            deb(ans);
            return;
        }
        if (l1 > r2)
            j = upperPartSize - 1;
        if (l2 > r1)
            i = upperPartSize + 1;
    }
    print("hi");
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