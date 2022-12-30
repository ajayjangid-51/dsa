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
    // vi v = {2, 1, 4, 3};
    // vi v = {1, 2, 3, 4};
    vi v = {3, 2, 4, 1, 5};
    vi mp(v.size() + 1);
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]] = i;
    }

    int b = 3;
    int cnt = 0;
    linebreak;
    int n = v.size();

    for (int i = 0; i < v.size(); i++)
    {
        if (cnt >= b)
            break;

        if (v[i] == n - i)
        {
            continue;
        }
        int tmp = mp[n - i], x = v[i];
        v[i] = n - i;
        mp[n - i] = i;
        mp[x] = tmp;
        v[tmp] = x;

        cnt++;
    }
    trav(v) cout << x;
    nline;
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
