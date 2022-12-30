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
int ans = INT_MIN;
void fn(int i, int len, vector<pii> &list, map<pii, int> &mp)
{
    pii p = list[i];
    if (mp.find(p) != mp.end())
    {
        debpair(p);
        deb(mp[p]);
        ans = max(ans, mp[p]);
        return;
    }
    for (int j = i + 1; j < list.size(); j++)
    {
        if (list[j].first > list[i].second)
        {
            fn(j, len + 1, list, mp);
        }
    }
    mp[p] = len;
    ans = max(ans, len);
}
// fn(x , 1);
void solve()
{
    vector<pii> list = {
        {5, 24},
        {39, 60},
        {15, 28},
        {27, 40},
        {50, 90},
        //
        // {98, 894},
        // {397, 942},
        // {70, 519},
        // {258, 456},
        // {286, 449},
        // {516, 626},
        // {370, 873},
        // {214, 224},
        // {74, 629},
        // {265, 886},
        // {708, 815},
        // {394, 770},
        // {56, 252}
    };
    map<pii, int> mp;
    for (int i = 0; i < list.size(); i++)
    {

        fn(i, 1, list, mp);
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