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
bool isValid(int l, int r, vi &v)
{
    print(l);
    print(r);
    nline;
    if (l + 1 == r)
    {
        return v[l] == v[r];
    }
    else
    {
        if (v[l] == v[l + 1] and v[l] == v[r])
            return 1;
        else if (v[l] == v[l + 1] - 1 and v[l + 1] == v[r] - 1)
            return 1;
    }
    return 0;
}
void solve()
{
    vi v = {4, 4, 4, 5, 6};
    vb store(v.size(), 0);
    if (isValid(0, 1, v))
        store[1] = 1;
    if (v.size() >= 3 and isValid(0, 2, v))
        store[2] = 1;
    if (isValid(2, 1, v))
        store[2] = 1;

    for (int i = 3; i < v.size(); i++)
    {
        if (isValid(i - 1, i, v))
            store[i] = store[i] or store[i - 2];
        if (isValid(i - 2, i, v))
            store[i] = store[i] or store[i - 3];
    }
    nline;
    trav(store) print(x);
    nline;
    debline(store.back());
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