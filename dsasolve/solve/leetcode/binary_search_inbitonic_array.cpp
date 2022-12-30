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
unordered_map<int, int> mp;
int fn(vi A, int start, int end, int e)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (e == A[mid])
        return mp[e];
    else if (e < A[mid])
        return fn(A, start, mid - 1, e);
    else
        return fn(A, mid + 1, end, e);
}
void solve()
{
    // vi A = {1, 20, 50, 40, 10};
    vi A = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    for (int i = 0; i < A.size(); i++)
    {
        mp[A[i]] = i;
    }
    trav(mp)
    {
        debpair(x);
    }
    int e = 5;
    int ans = fn(A, 0, A.size() - 1, e);
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