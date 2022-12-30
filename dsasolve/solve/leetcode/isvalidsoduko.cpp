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
    vs mat = {"53..7....", "6..195...", ".98....6.", "8...6...3", "4..8.3..1", "7...2...6", ".6....28.", "...419..5", "....8..79"};
    vb visited(10, 0);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            asi
            {
                if (mat[i][j] == '.')
                    continue;
                int n = int(mat[i][j] - '0');
                if (visited[n])
                {
                    debline("invalid");
                    deb(i);
                    deb(j);
                    return;
                }
                visited[n] = 1;
            }
        visited.assign(10, 0);
    }
    visited.assign(10, 0);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (mat[j][i] == '.')
                continue;
            int n = int(mat[j][i] - '0');
            if (visited[n])
            {
                debline("invalid");
                return;
            }
            visited[n] = 1;
        }
        visited.assign(10, 0);
    }
    vi v = {0, 3, 6};
    int ii = 0;
    for (int ii = 0; ii < 3; ii++)
    {
        for (int jj = 0; jj < 3; jj++)
        {
            for (int i = v[ii]; i < v[ii] + 3; i++)
            {

                for (int j = v[jj]; j < v[jj] + 3; j++)
                {
                    // deb(i);
                    // deb(j);
                    // print(mat[i][j]);
                    if (mat[i][j] == '.')
                        continue;
                    int n = int(mat[i][j] - '0');
                    if (visited[n])
                    {
                        debline("invalid");
                        // deb(i);
                        // deb(j);
                        return;
                    }
                    visited[n] = 1;
                }
                nline;
                // linebreak;
            }
            visited.assign(10, 0);
            linebreak;
            // linebreak;
            // linebreak;
        }
    }

    debline("okaygood");
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