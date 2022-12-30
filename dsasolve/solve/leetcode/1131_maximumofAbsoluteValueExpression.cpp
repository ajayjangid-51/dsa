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
int solve()
{
    vi v1 = {1, 2, 3, 4};
    vi v2 = {-1, 4, 5, 6};
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;
    int max3 = INT_MIN, min3 = INT_MAX;
    int max4 = INT_MIN, min4 = INT_MAX;

    for (int i = 0; i < v1.size(); i++)
    {
        max1 = max(max1, v1[i] + v2[i] + i);
        min1 = min(min1, v1[i] + v2[i] + i);
        max2 = max(max2, v1[i] + v2[i] - i);
        min2 = min(min2, v1[i] + v2[i] - i);
        max3 = max(max3, v1[i] - v2[i] + i);
        min3 = min(min3, v1[i] - v2[i] + i);
        max4 = max(max4, v1[i] - v2[i] - i);
        min4 = min(min4, v1[i] - v2[i] - i);
    }
    int t = max((max1 - min1), (max2 - min2));
    int t2 = max(t, (max3 - min3));
    int t3 = max(t2, (max4 - min4));
    return t3;
    // return max(max(max((max1 - min1), (max2 - min2)), (max3 - min3)), (max4 - min4))
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