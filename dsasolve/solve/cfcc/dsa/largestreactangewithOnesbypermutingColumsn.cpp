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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
    vvi v = {
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {1, 1, 0, 1, 0},

    };
    int n = sz(v);
    int m = sz(v[0]);
    vvi store = v;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            store[i][j] = v[i][j] + store[i - 1][j];
        }
    }
    linebreak1;
    trav(store)
    {
        sort(range(x), greater<int>());
        trav2(x) print(y);
        nline;
    }
    for (int i = 0; i < n; i++)
    {
        sort(range(store[i]), greater<int>());
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            print(i), print(j), nline;
            deb(store[i][j]);
            print(store[i][j]);
            int areaa = store[i][j] * (j + 1);
            deb(areaa);
            maxi = max(maxi, (store[i][j] * (j + 1)));
        }
        nline;
    }
    debline(maxi);
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