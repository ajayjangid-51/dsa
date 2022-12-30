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
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
stack<int> stk;
void dfs(int node, vector<vector<int>> &v, vector<bool> &visited)
{
    visited[node] = 1;
    for (auto x : v[node])
    {
        if (!visited[x])
            dfs(x, v, visited);
    }
    stk.push(node);
}
void dfs2(int node, vector<vector<int>> &v, vector<bool> &visited2)
{
    visited2[node] = 1;
    for (auto x : v[node])
    {
        if (!visited2[x])
            dfs2(x, v, visited2);
    }
}

int motherVertex(int A, vector<vector<int>> &B)
{
    // stk.clear();
    while (!stk.empty())
        stk.pop();
    vector<vector<int>> v(A + 1);
    vector<bool> visited(A + 1, 0);
    visited[0] = 1;
    for (auto x : B)
    {
        if (x[0] != x[1])
        {

            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
    }
    for (int i = 1; i <= A; i++)
    {
        if (!visited[i])
        {
            dfs(i, v, visited);
        }
    }
    vector<bool> visited2(A + 1, 0);
    visited2[0] = 1;
    dfs2(stk.top(), v, visited2);
    // cout << stk.top() << " --- " ;
    bool t = 1;
    for (auto x : visited2)
    {
        if (!x)
        {
            t = 0;
            break;
        }
    }
    return t;
}

void solve()
{
    // vector<vector<int>> B = {{1, 1}, {2, 2}, {1, 2}};
    vector<vector<int>> B = {
        {3, 7},
        {7, 6},
        {2, 3},
        {1, 5},
        {3, 3},
        {4, 7},
        {6, 4},
        {3, 4},
        {6, 4},
        {6, 6},
        {1, 3},
        {6, 5}

    };
    int A = 7;
    //
    stack<int> stk;
    vector<vector<int>> l(A + 1);
    vector<bool> vi1(A, 0), vi2(A, 0);
    //
    for (auto x : B)
    {
        if (x[0] != x[1])
        {
            l[x[0]].push_back(x[1]);
            l[x[1]].push_back(x[0]);
        }
    }
    for (int i = 1; i < l.size(); i++)
    {
        print(i), print(":-");
        for (auto x : l[i])
        {
            print(x);
        }
        nline;
    }
    print("hei");
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