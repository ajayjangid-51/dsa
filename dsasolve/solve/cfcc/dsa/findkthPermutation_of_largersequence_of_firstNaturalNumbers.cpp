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
int findIndex(int n, int &k)
{
    if (n == 1)
        return 0;
    n = n - 1;
    int pn = n;
    while (pn <= k and n > 1)
    {
        pn = pn * (n - 1);
        n--;
    }
    int index = k / pn;
    k = k % pn;
    return index;
}
vi fn(int n, int k)
{
    set<int> s;
    k = k - 1;
    for (int i = 1; i <= n; i++)
        s.insert(i);
    auto it = s.begin();
    vi ans;

    for (int i = 0; i < n; i++)
    {
        int index = findIndex(n - i, k);
        advance(it, index);
        ans.push_back(*it);
        s.erase(it);
        it = s.begin();
    }
    return ans;
}
void solve()
{
    int n = 4, k = 9;
    vi ans = fn(n, k);
    linebreak1;
    trav(ans) print(x);
    linebreak1;
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