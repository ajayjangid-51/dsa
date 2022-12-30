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
// int N = 9;
vvi grid(9, vi(9, 0));
// vvi grid(N, vi(N, 0));
bool isSafe(int row, int col, int e)
{
    for (int i = 0; i < 9; i++)
    {
        if (grid[i][col] == e)
            return false;
    }
    for (int j = 0; j < 9; j++)
    {
        if (grid[row][j] == e)
            return false;
    }
    int ii = row - row % 3, jj = col - col % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[ii + i][jj + j] == e)
                return false;
        }
    }
    return true;
}
bool fn(int row, int col)
{
    if (row == 9 and col == 8)
        return true;

    if (row == 9)
    {
        row = 0;
        col++;
    }
    if (grid[row][col] > 0)
        return fn(row + 1, col);

    for (int i = 1; i <= 9; i++)
    {
        if (isSafe(row, col, i))
        {
            grid[row][col] = i;
            if (fn(row + 1, col))
                return 1;
        }
        grid[row][col] = 0;
    }
    return false;
}
void solve()
{
    // grid.clear();
    // grid.assign(0, vi(0));
    // for(int i= 0;i<9;i++){
    //     for(int j = 0;j<9;j++){
    //         grid[i][j]  =0;
    //     }
    // }
    bool t = fn(0, 0);
    // deb(grid.size());
    // deb(grid[0].size());

    if (!t)
        deb("sorry soduko can't be solved");
    else
    {
        int n, m;
        n = m = 9;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                print(grid[i][j]);
            }
            nline;
        }
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