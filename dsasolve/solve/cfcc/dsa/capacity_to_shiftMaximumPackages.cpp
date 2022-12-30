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
    // vi A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vi A = {3, 2, 2, 4, 1, 4};
    // sort(A.begin(), A.end());
    nline;
    trav(A) print(x);
    nline;
    int n = A.size();
    int B = 3;
    vi v(n);
    v[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = A[i] + v[i - 1];
    }
    linebreak1;
    trav(v) print(x);
    linebreak1;
    int ans = INT_MAX;

    int i = 1, j = n;
    while (i <= j)
    {
        int midInx = (i + j) / 2;
        int mid = v[midInx];
        deb(mid);
        int cnt = 1;
        int pointr = mid;
        int pmx = min(v[midInx + 1], n);
        // for (int l = pointr; l < pmx; l++)
        // {

        for (int k = midInx + 1; k < n; k++)
        {
            if (v[k] - pointr > mid)
            {
                cnt++;
                pointr = v[k - 1];
            }
        }
        // cnt++;
        deb(cnt);
        // if (cnt == B)
        if (cnt < B)
        {
            ans = min(ans, mid);
            j = midInx - 1;
        }
        else
        {
            i = midInx + 1;
        }
    }
    debline(ans);
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