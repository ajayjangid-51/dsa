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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
    int A = 5;
    int cnt = 1;
    vvi v(A, vi(A));
    linebreak1;
    trav(v)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
    int rowStart = 0, rowEnd = A - 1;
    int colStart = 0, colEnd = A - 1;
    int x = rowStart, y = colStart;

    bool x1 = 0, x2 = 0, y1 = 0, y2 = 1;
    while (1)
    {
        if (cnt > (A * A))
            break;
        v[x][y] = cnt++;
        // deb(x);
        // deb(y);
        // deb(v[x][y]);
        // deb(cnt);
        // nline;
        // nline;

        if (y == colEnd and x != rowEnd)
        {
            x2 = 1;
            y1 = 0;
            y2 = 0;
        }
        else if (y == colEnd and x == rowEnd)
        {
            x1 = 0;
            x2 = 0;
            y1 = 1;
        }
        else if (x == rowEnd and y == colStart)
        {
            y1 = 0;
            y2 = 0;
            x1 = 1;
        }
        else if (x == (rowStart + 1) and y == colStart)
        {
            rowStart++;
            rowEnd--;
            colStart++;
            colEnd--;
            deb(rowStart);
            deb(rowEnd);
            deb(colStart);
            deb(colEnd);
            x = rowStart;
            y = colStart;
            x1 = 0;
            x2 = 0;
            y1 = 0;
            y2 = 1;
            continue;
        }

        if (x2)
            x++;
        if (x1)
            x--;
        if (y1)
            y--;
        if (y2)
            y++;
    }
    linebreak1;

    trav(v)
    {
        trav2(x) print(y);
        nline;
    }

    deb("hi");
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