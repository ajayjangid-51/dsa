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
    // vi A = {5, 5, 2, 5, 8};
    vi A = {2, 1, 6, 4};
    int n = A.size();
    vi podd(n), peven(n), nodd(n), neven(n);
    podd[0] = 0;
    peven[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            podd[i] = A[i - 1] + podd[i - 1];
            peven[i] = peven[i - 1];
        }
        else
        {
            peven[i] = A[i - 1] + peven[i - 1];
            podd[i] = podd[i - 1];
        }
    }
    trav(podd) print(x);
    nline;
    trav(peven) print(x);
    nline;

    nodd[n - 1] = 0;
    neven[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int indx = i - 1;
        if (indx % 2 == 0)
        {
            nodd[i] = nodd[i + 1] + A[i + 1];
            neven[i] = neven[i + 1];
        }
        else
        {
            neven[i] = A[i + 1] + neven[i + 1];
            nodd[i] = nodd[i + 1];
        }
    }
    linebreak1;
    trav(nodd) print(x);

    nline;
    trav(neven) print(x);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        int x = podd[i] + nodd[i];
        int y = peven[i] + neven[i];
        if (x == y)
            ans++;
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