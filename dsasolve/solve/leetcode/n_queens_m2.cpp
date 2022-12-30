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

vector<vector<string>> res;
bool issafe(vvi &cboard, int row, int col)
{
    int n = cboard.size();
    for (int i = 0; i < n; i++)
    {
        if (cboard[i][col])
            return false;
    }
    for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
    {
        if (cboard[i][j])
            return false;
    }
    for (int i = row, j = col; i >= 0 and j < n; i--, j++)
    {
        if (cboard[i][j])
            return false;
    }
    return 1;
}
bool fn(vvi &cboard, int row)
{
    int n = cboard.size();
    if (row == n)
    {
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            for (int j = 0; j < n; j++)
            {
                if (cboard[i][j] == 1)
                {
                    s.push_back('Q');
                }
                else
                    s.push_back('.');
            }
            // deb(s);
            v.push_back(s);
        }
        res.push_back(v);
        return 1;
    }
    bool flag = 0;
    for (int j = 0; j < n; j++)
    {
        if (issafe(cboard, row, j))
        {
            cboard[row][j] = 1;
            flag = fn(cboard, row + 1) or flag;
            cboard[row][j] = 0;
        }
    }
    return flag;
}
vector<vector<string>> solveNQueens(int A)
{
    res.clear();
    vvi cboard(A, vi(A, 0));
    if (!fn(cboard, 0))
        return {};
    else
        return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vector<vector<string>> mm = solveNQueens(1);
        trav(mm)
        {
            trav2(x)
            {
                print(y);
            }
            nline;
        }
    }
    return 0;
}
