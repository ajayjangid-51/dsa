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
    int n, k;
    cin >> n >> k;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(range(v));
    vi v1;
    int x = v[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == x)
            cnt++;
        else
        {
            if (cnt >= k)
            {
                v1.push_back(x);
            }
            x = v[i];
            cnt = 1;
        }
    }
    if (cnt >= k)
        v1.push_back(x);
    if (v1.size() == 0)
    {
        // debline("-1");
        print("-1"), nline;
        return;
    }

    int start = v1[0];
    int end = v1[0];
    int maxlen = 1;
    pii ans;
    ans.first = start;
    ans.second = end;
    int len = 1;
    // trav(v1) print(x);
    // nline;

    for (int i = 1; i < v1.size(); i++)
    {
        // deb(v1[i]);
        // deb(start);
        // deb(end);
        if (v1[i] == start + len)
        {
            len++;
            end = v1[i];
        }
        else
        {
            if (len > maxlen)
            {
                maxlen = len;
                ans.first = start;
                ans.second = end;
            }
            start = v1[i];
            len = 1;
            end = v1[i];
        }
    }
    if (len > maxlen)
    {
        maxlen = len;
        ans.first = start;
        ans.second = end;
    }
    // linebreak;
    // debline(ans.first);
    // debline(ans.second);
    // linebreak;
    print(ans.first);
    print(ans.second);
    nline;
}
int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}