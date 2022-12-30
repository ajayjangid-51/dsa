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
#define doktimes(k) for (int z = 0; z < k; z++)
#define travmat(mat)                     \
    for (int i = 0; i < mat.size(); i++) \
        for (int j = 0; j < mat[0].size(); j++)
#define range(arr) arr.begin(), arr.end()
const int MOD = 1000000007;

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
    vvi mat = {{1, 2, 4}, {4, 5, 8}, {3, 3, 1}};
    vvi ans = mat;
    int k = 1;
    doktimes(k)
    // for (int x = 0; x < k; x++)
    {
        // travmat(mat)
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[0].size(); j++)
            {
                int maxx = ans[i][j];
                if (i > 0)
                {
                    maxx = max(maxx, ans[i - 1][j]);
                }
                if (j > 0)
                {
                    maxx = max(maxx, ans[i][j - 1]);
                }
                if (i < mat.size() - 1)
                {
                    maxx = max(maxx, ans[i + 1][j]);
                }
                if (j < mat[0].size() - 1)
                {
                    maxx = max(maxx, ans[i][j + 1]);
                }
                mat[i][j] = maxx;
            }
        ans = mat;
    }
    travmat(ans) print(ans[i][j]);
    // return ans;
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