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
int ans;
void fn(vi &v, int start, int end)
{
    deb(start);
    deb(end);
    int mid = (start + end) / 2;
    mid++;
    deb(mid);
    linebreak;

    if (v[mid] > v[mid - 1] and v[mid] > v[mid + 1])
    {
        debline(v[mid]);
        ans = mid - 1;

        return;
    }
    else if (v[mid] < v[mid - 1])
    {
        return fn(v, start, mid - 1);
    }
    else
    {
        return fn(v, mid + 1, end);
    }
}
void solve()
{
    // vi v = {30, 41, 24, 11, 24};
    vi v = {1, 2, 3, 1};
    v.insert(v.begin(), 1, -1);
    v.push_back(-1);
    fn(v, 1, v.size() - 2);
    debline(ans);
    debline(INT_MIN);
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