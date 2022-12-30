/* #include <bits/stdc++.h>
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
void solve()
{
    vvi A = {{1, 3}, {0, 2}};
    int n = A.size();
    // bfs:-
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            if (A[i][j] == 1)
                q.push({i, j});
        }
    }
    // debpair(q.front());
    while (!q.empty())
    {
        pii p = q.front();
        // debpair(p);
        if (A[p.first][p.second] == 2)
        {
            print("yes");
            break;
        }
        q.pop();
        if (p.second < n - 1 and A[p.first][p.second + 1] != 0)
            q.push({p.first, p.second + 1});
        if (p.second > 0 and A[p.first][p.second - 1] != 0)
            q.push({p.first, p.second - 1});
        if (p.first < n - 1 and A[p.first + 1][p.second] != 0)
            q.push({p.first + 1, p.second});
        if (p.first > 0 and A[p.first - 1][p.second] != 0)
            q.push({p.first - 1, p.second});
    }
    print("no");
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
} */

int Solution::checkPath(vector<vector<int>> &A)
{
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};
    queue<pair<int, int>> q;
    int n = A.size(), m = A[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == 1)
            {
                q.push({i, j});
                break;
            }
        }
    }
    while (!q.empty())
    {

        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (A[x][y] == 2)
            return 1;
        A[x][y] = 0;
        for (int k = 0; k < 4; k++)
        {
            int cx = x + dx[k], cy = y + dy[k];
            if (cx >= 0 && cy >= 0 && cx < n && cy < m && A[cx][cy] != 0)
            {
                q.push({cx, cy});
            }
        }
    }
    return 0;
}