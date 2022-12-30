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
    // vi A = {1, 3, 4, 7, 8, 10, 13};
    // vi B = {5, 8, 9, 11, 13, 15};
    vi A = {1, 4, 5};
    vi B = {2, 3};
    int i1 = 0, j1 = A.size() - 1;
    int i2 = 0, j2 = B.size() - 1;
    int median1 = 0, median2 = 0;
    int mid1 = 0, mid2 = 0;
    while (i1 <= j1 or i2 <= j2)
    {
        int sz1 = (j1 - i1) + 1;
        int sz2 = (j2 - i2) + 1;
        // deb(sz1);
        // deb(sz2);

        if (sz1 & 1)
        {
            median1 = A[sz1 / 2];
            mid1 = sz1 / 2;
        }
        else
        {
            mid1 = sz1 / 2;
            median1 = (A[(sz1 / 2) - 1] + A[(sz1 / 2)]) / 2;
        }
        if (sz2 & 1)
        {
            mid2 = sz2 / 2;
            median2 = B[sz2 / 2];
        }
        else
        {
            mid2 = sz2 / 2;
            // deb(B[(sz2 / 2) - 1]);
            // deb(B[sz2 / 2]);
            median2 = (B[(sz2 / 2) - 1] + B[(sz2 / 2)]) / 2;
        }
        // deb(median1);
        // deb(median2);
        if (median1 < median2)
        {
            i1 = mid1 + 1;
            j2 = mid2 - 1;
        }
        else
        {
            j1 = mid1 - 1;
            i2 = mid2 + 1;
        }
    }
    deb(median1);
    deb(median2);
    deb(i1);
    deb(j1);
    deb(i2);
    deb(j2);
    print("ans");
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