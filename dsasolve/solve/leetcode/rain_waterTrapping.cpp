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
void solve()
{
    // vi arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vi arr = {3, 0, 2, 0, 4};
    int i = 1, j = arr.size() - 2;
    vi left(arr.size());
    vi right(arr.size());
    left[0] = arr[0];
    right[arr.size() - 1] = arr[arr.size() - 1];
    for (; i < arr.size(); i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    for (; j >= 0; j--)
    {
        right[j] = max(right[j + 1], arr[j]);
    }
    trav(left) print(x);
    linebreak;
    trav(right) print(x);
    linebreak;

    int sum = 0;
    for (i = 0; i < arr.size(); i++)
    {
        sum += min(left[i], right[i]) - arr[i];
    }
    debline(sum);
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