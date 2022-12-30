#include <bits/stdc++.h>
using namespace std;

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
    // int eggs = 3, floors = 7;
    int eggs = 2, floors = 2;
    vector<vector<int>> store(eggs + 1, vector<int>(floors + 1, 0));
    trav(store)
    {
        trav2(x) print(y);
        nline;
    }

    for (int e = 1; e <= eggs; e++)
    {
        for (int f = 1; f <= floors; f++)
        {
            if (e == 1)
            {
                store[e][f] = f;
            }
            else if (f == 0)
                store[e][f] = 0;
            else if (f == 1)
                store[e][f] = 1;
            else
            {
                int i1 = e - 1, j1 = 0;
                int i2 = e, j2 = f - 1;
                int mini = INT_MAX;
                for (; j1 <= f; j1++, j2--)
                {
                    mini = min(mini, max(store[i1][j1], store[i2][j2]));
                }
                store[e][f] = 1 + mini;
            }
        }
    }
    linebreak1;
    trav(store)
    {
        trav2(x) print(y);
        nline;
    }
    deb(store[eggs][floors]);
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