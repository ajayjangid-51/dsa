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
    vi arr = {2, 1, 10, 10, -1, -3, 8, 3, 6, 7};
    vi ans;
    int n = arr.size();
    int k = 4;
    int i = 0, j = k - 1;
    deque<pii> que; // pair<number , index>
    for (; i < k; i++)
    {
        while (!que.empty() and arr[i] > que.back().first)
        {
            que.pop_back();
        }
        que.push_back({arr[i], i});
    }
    i = 0;
    // for (; j < n; i++, j++)
    while (j < n)
    {
        // print("Hi");
        // deb(que.front().second);
        // deb(i);
        // deb(j);
        while (que.front().second < i or que.front().second > j)
        {

            que.pop_front();
        }
        ans.push_back(que.front().first);
        i++, j++;
        while (!que.empty() and arr[j] > que.back().first)
        {
            que.pop_back();
        }
        que.push_back({arr[j], j});
    }
    trav(ans) print(x);
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