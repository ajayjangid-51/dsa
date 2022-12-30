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
    vi A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int B = 3, C = 4;

    vi dx = {0, 1, 0, -1};
    vi dy = {1, 0, -1, 0};
    vvi ans(B, vi(C, 0));
    int j = 0;
    int px = 0, py = -1;
    for (int i = 0; i < B * C; i++)
    {
        int x = px + dx[j];
        int y = py + dy[j];

        if (x < 0 or x >= B or y < 0 or y >= C or ans[x][y] != 0) // considered all corners of matrix and also already-marked boxes of matrix.
        {
            j = (j + 1) % 4;
            x = px + dx[j];
            y = py + dy[j];
        }

        ans[x][y] = A[i];
        px = x;
        py = y;
    }
    linebreak1;
    trav(ans)
    {
        trav2(x) print(y);
        nline;
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