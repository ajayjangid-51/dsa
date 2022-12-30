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

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        print("1");
        nline;
        return;
    }
    int i = 0, j = 1;

    vi ans;
    ans.push_back(v[0]);
    ans.push_back(v[n - 1]);
    int ii = 1, jj = n - 2;
    while (ii <= jj)
    {
        int l = v[ii], r = v[jj];
        if (r < ans[i])
        {
            ans.push_back(r);
            jj--;
            j++;
        }

        else if (l < ans[j])
        {
            vi v2;
            v2.push_back(l);
            trav(ans) v2.push_back(x);
            ans = v2;
            ii++;
            j++;
        }
        else
        {
            print("-1");
            nline;
            return;
        }
    }

    // debline(ans.size());
    // linebreak;
    trav(ans) print(x);
    nline;
    // linebreak;
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