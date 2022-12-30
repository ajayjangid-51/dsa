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
    vi items = {15, 10, 6};
    int n = items.size();
    int sum = 0;
    trav(items) sum += x;
    pii sumrange = {-sum, sum}; // all -ive or all +ive.
    int left = -sum - *items.rbegin();
    int right = sum + *items.rbegin();
    map<pii, int> mp;
    for (int i = left + 1; i <= right + 1; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0)
                mp[make_pair(j, i)] = 0;
            else
                mp[make_pair(j, i)] = 1000000;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = -sum; j <= sum; j++)
        {
            mp[make_pair(i, j)] = min(min(mp[make_pair(i, j)], (mp[make_pair(i - 1, j + items[i - 1])] + 1)), mp[make_pair(i - 1, j - items[i - 1])]);
            // deb(mp[make_pair(i, j)]);
        }
    }
    for (int j = 0; j <= sum; j++)
    {
        int ans = 1000000;
        for (int i = 0; i <= n; i++)
        {
            ans = min(ans, mp[make_pair(i, j)]);
        }
        // if (ans < 100000 and ans != 0)
        // {
        deb(ans);
        // return;
        // }
    }

    // deb(mp[make_pair()])
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