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
    int n, m;
    cin >> n >> m;
    vvi v(n, vi(m));
    /* trav(v){
        trav2(x)
        {
            // print(y);
            print("hi");
            int x = -1;
            cin >> x;
            deb(x);
            y = x;
            nline;
        }
        // nline;
    }
    print("-------------------");
    nline; */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = v[i][j];
            for (int k = i + 1, l = j + 1; k < n and l < m; k++, l++)
            {
                sum += v[k][l];
            }
            for (int k = i + 1, l = j - 1; k < n and l >= 0; k++, l--)
            {
                sum += v[k][l];
            }
            for (int k = i - 1, l = j - 1; k >= 0 and l >= 0; k--, l--)
            {
                sum += v[k][l];
            }
            for (int k = i - 1, l = j + 1; k >= 0 and l < m; k--, l++)
            {
                sum += v[k][l];
            }
            // debline(sum);
            maxx = max(maxx, sum);
        }
    }
    // print("--------------------");
    // debline(maxx);
    print(maxx);
    nline;
}
int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}