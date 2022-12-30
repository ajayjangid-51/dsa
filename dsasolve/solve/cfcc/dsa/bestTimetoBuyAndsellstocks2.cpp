#include <bits/stdc++.h>
using namespace std;

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
    // vi price = {1, 2, 3, 2, 5};
    // vi price = {7, 1, 5, 3, 6, 4};
    // vi price = {1, 2, 3, 4, 5};
    // vi price = {3, 2, 6, 5, 0, 3};
    vi price = {5, 2, 3, 2, 6, 6, 6, 2, 9, 1, 0, 7, 4, 5, 0};

    int n = price.size();
    price.insert(price.begin(), INT_MIN);
    price.push_back(INT_MIN);
    int b = 1, s = 1;
    int ans = 0;
    while (s <= n)
    {
        if (price[s] > price[s - 1] and price[s] >= price[s + 1])
        {
            deb(price[s]);
            deb(s);
            deb(b);
            ans += price[s] - price[b];
            debline(ans);
            s++;
            b = s;
        }
        else
            s++;
        if (price[s] < price[s - 1])
            b = s;
        linebreak1;
    }
    deb(ans);
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