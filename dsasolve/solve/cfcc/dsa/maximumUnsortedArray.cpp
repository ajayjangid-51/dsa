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
    // vi v = {1, 5, 4, 3, 2, 6};
    // vi v = {1, 3, 2, 4, 5};
    vi v = {1, 2, 3, 5, 6, 13, 15, 16, 17, 13, 13, 15, 17, 17, 17, 17, 17, 19, 19};
    // vi v = {1, 3, 2, 4, 5, 6, 4};
    v.push_back(INT_MAX);
    // vi v = {1, 1, 10, 10, 15, 10, 15, 10, 10, 15, 10, 15};
    int l = -1, r = v.size() - 1;
    1 int mini = v.size() - 1;
    int maxi = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (l == -1)
        {

            if (v[i] > v[i + 1])

            {
                l = i;
                mini = min(mini, i);
                print("😀");
                deb(l);
                nline;
            }
        }
        else
        {

            if (v[i + 1] > v[i])
            {
                r = i;
                maxi = max(maxi, r);
                l = -1;
                deb(r);
            }
        }
    }
    deb(mini);
    deb(maxi);
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