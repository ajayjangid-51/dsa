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
    vector<int> v = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    vector<int> maxi(v.size(), INT_MIN);
    vector<int> mini(v.size(), INT_MAX);
    int n = v.size();
    int maxx = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (maxx < v[i])
        {
            deb(v[i]);
            maxx = v[i];
        }
        maxi[i] = maxx;
        if (minn > v[n - i - 1])
        {
            deb(v[n - i - 1]);
            minn = v[n - 1 - i];
        }
        mini[n - 1 - i] = minn;
    }
    trav(maxi) print(x);
    nline;

    linebreak;
    trav(mini) print(x);
    nline;

    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > maxi[i - 1] and v[i] < mini[i + 1])
        {

            deb("yes");
            return;
        }
    }
    deb("no");
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
