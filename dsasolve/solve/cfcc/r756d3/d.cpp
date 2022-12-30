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
    int n;
    cin >> n;
    // deb(n);
    // vi b = {4, 4, 4, 4, 1, 1};
    vi b(n);
    int parent = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == i + 1)
            parent = x;
        b[i] = x;
    }
    // vi p = {4, 2, 1, 5, 6, 3};
    vi p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    // trav(b) print(x);
    // linebreak;
    // trav(p) print(x);
    // linebreak;
    vi ans(n + 1, -1);
    // debline(parent);
    ans[parent] = 0;
    if (p[0] != parent)
    {
        // debline("-1");
        print("-1");
        nline;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        // deb(b[p[i] - 1]);
        if (ans[b[p[i] - 1]] == -1)
        {
            // debline("-1 no answer");
            print("-1");
            nline;
            return;
        }
        // deb(p[i]);
        // deb(ans[b[i]]);
        int d = i - ans[b[p[i] - 1]];
        // deb(d);
        ans[p[i]] = d;
        // linebreak;
    }
    ans.erase(ans.begin());
    trav(ans) print(x);
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