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
    vvi A = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int n = A.size(), m = A[0].size();
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, A[i][0]);
        maxi = max(maxi, A[i][m - 1]);
    }
    debline(mini);
    debline(maxi);
    // int mid = (mini + maxi) / 2;
    int sz = ((n * m) / 2) + 1;
    while (mini < maxi)
    {
        int mid = (mini + maxi) / 2;
        // int mid = mini + (maxi - mini) / 2;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int t = upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
            cnt += t;
        }
        if (cnt < sz)
        {
            mini = mid + 1;
        }
        else
            maxi = mid;
    }
    // debline(mid);
    debline(mini);
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