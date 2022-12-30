#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
// 1000000007
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
stack<int> stk;
int maxi;
void dfs(pii p, map<int, vector<pii>> &mp, vi &store, vector<bool> &visited)
{
    visited[p.first] = 1;
    linebreak1;
    deb(p.first);
    stk.push(p.second);

    stack<int> stk3 = stk;
    while (!stk3.empty())
    {
        print(stk3.top());
        stk3.pop();
    }
    linebreak1;
    stack<int> stk2 = stk;
    maxi = INT_MIN;
    while (!stk2.empty())
    {
        maxi = max(stk2.top(), maxi);
        stk2.pop();
    }
    debline(maxi);
    store[p.first] = maxi;
    for (auto x : mp[p.first])
    {
        if (!visited[x.first])
        {

            dfs(x, mp, store, visited);
        }
    }
    if (!stk.empty())
        stk.pop();
}
void solve()
{
    vvi v = {{1, 2, 11}, {1, 3, 1}, {2, 4, 12}, {2, 5, 100}};
    vvi q = {{3, 5}, {2, 3}};
    maxi = INT_MIN;
    map<int, vector<pair<int, int>>> mp;
    for (int i = 0; i < sz(v); i++)
    {
        mp[v[i][0]].push_back({v[i][1], v[i][2]});
        mp[v[i][1]].push_back({v[i][0], v[i][2]});
    }
    int n = sz(v) + 1;
    deb(n);
    vi store(n + 1, 0);
    vb visited(n + 1, 0);
    dfs({1, 0}, mp, store, visited);
    linebreak1;
    trav(store) print(x);
    linebreak1;

    for (int i = 0; i < sz(q); i++)
    {
        int ans = max(store[q[i][0]], store[q[i][1]]);
        deb(ans);
    }
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