//🔥💲🍕 as toh now aab apn Recursive-Merge-Sort dekhenge... 🍕💲🔥

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
vi merge(vi v1, vi v2)
{
    vi v;
    int i = 0, j = 0;
    while (i < v1.size() and j < v2.size())
    {
        if (v1[i] <= v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v2[j]);
            j++;
        }
    }

    for (; i < v1.size(); i++)
    {
        v.push_back(v1[i]);
    }
    for (; j < v2.size(); j++)
        v.push_back(v2[j]);
    return v;
}
vi fn(vi &arr, int start, int end)
{
    if (start == end)
    {
        vi v = {arr[start]};
        return v;
    }
    int mid = (start + end) / 2;
    vi v1 = fn(arr, start, mid);
    vi v2 = fn(arr, mid + 1, end);
    vi v = merge(v1, v2);
    return v;
}
void solve()
{
    vi arr = {7, 4, 1, 3, 6, 8, 2, 5};
    vi v1 = {1, 3, 4, 7};
    vi v2 = {2, 5, 8, 8};
    // vi v = merge(v1, v2);
    // trav(v) print(x);
    // linebreak;
    vi v = fn(arr, 0, 7);
    trav(v) print(x);
    linebreak;
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