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
    vvi mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, -1},
        // {-8, 5, 7},
        // {3, 7, -8},
        // {5, -8, 9},
    };
    int cnt = 0;
    int n = mat.size(), m = mat[0].size();
    // the idea of doing this is simple ki traverse-the-matrix and for each-element consider the matrices(in all directions) which start from that element.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // print(mat[i][j]);
            int row = i;
            int col = j;
            int sum1 = 0, sum2 = 0, sum3 = 0;

            for (int k = col; k < m; k++)
            {
                for (int l = col; l <= k; l++)
                {
                    print(mat[row][l]);
                    sum1 += mat[row][l];
                }
                if (sum1 == 0)
                    cnt++;
                sum1 = 0;
                nline;
            }
            linebreak;
            for (int k = row + 1; k < n; k++)
            {

                for (int l = row; l <= k; l++)
                {
                    print(mat[l][j]);
                    sum2 += mat[l][j];
                }
                if (sum2 == 0)
                    cnt++;
                sum2 = 0;
                nline;
            }
            linebreak;

            for (int o = row + 1; o < n; o++)
            {
                for (int p = col + 1; p < m; p++)
                {
                    for (int k = row; k <= o; k++)
                    {
                        for (int l = col; l <= p; l++)
                        {
                            print(mat[k][l]);
                            sum3 += mat[k][l];
                        }
                        nline;
                    }
                    if (sum3 == 0)
                        cnt++;
                    sum3 = 0;
                    linebreak;
                    linebreak;
                }
            }

            nline;
        }
    }
    debline(cnt);
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